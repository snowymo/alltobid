#include "Recognition.h"

#include <iostream>
#include <string>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

Recognition::Recognition()
{
	hwnd = GetDesktopWindow();
	RECT windowsize;    // get the height and width of the screen
	GetClientRect(hwnd, &windowsize);

	srcheight = windowsize.bottom;
	srcwidth = windowsize.right;
	height = windowsize.bottom / 2;  //change this to whatever size you want to resize to
	width = windowsize.right / 2;

	src.create(height, width, CV_8UC4);

	cv::namedWindow("live");

	cv::setMouseCallback("live", Recognition::selectAOI, 0);

	initialDigit();
}


Recognition::~Recognition()
{
}


// aoiPt1 = cv::Point(0, 0);
// aoiPt2 = cv::Point(0, 0);
// aoi = cv::Rect(aoiPt1, aoiPt2);


cv::Mat Recognition::generateLive()
{

	BITMAPINFOHEADER  bi;

	hwindowDC = GetDC(hwnd);
	hwindowCompatibleDC = CreateCompatibleDC(hwindowDC);
	SetStretchBltMode(hwindowCompatibleDC, COLORONCOLOR);

	// create a bitmap
	hbwindow = CreateCompatibleBitmap(hwindowDC, width, height);
	bi.biSize = sizeof(BITMAPINFOHEADER);    //http://msdn.microsoft.com/en-us/library/windows/window/dd183402%28v=vs.85%29.aspx
	bi.biWidth = width;
	bi.biHeight = -height;  //this is the line that makes it draw upside down or not
	bi.biPlanes = 1;
	bi.biBitCount = 32;
	bi.biCompression = BI_RGB;
	bi.biSizeImage = 0;
	bi.biXPelsPerMeter = 0;
	bi.biYPelsPerMeter = 0;
	bi.biClrUsed = 0;
	bi.biClrImportant = 0;

	// use the previously created device context with the bitmap
	SelectObject(hwindowCompatibleDC, hbwindow);
	// copy from the window device context to the bitmap device context
	StretchBlt(hwindowCompatibleDC, 0, 0, width, height, hwindowDC, srcwidth*0.2, 0, width, height/*srcheight*0.5*/, SRCCOPY); //change SRCCOPY to NOTSRCCOPY for wacky colors !
	GetDIBits(hwindowCompatibleDC, hbwindow, 0, height, src.data, (BITMAPINFO *)&bi, DIB_RGB_COLORS);  //copy from hwindowCompatibleDC to hbwindow

																									   // avoid memory leak
	DeleteObject(hbwindow); DeleteDC(hwindowCompatibleDC); ReleaseDC(hwnd, hwindowDC);

	return src;
}
cv::Mat element = cv::getStructuringElement(1, cv::Size(3, 3));
void Recognition::detectDigit()
{
	std::map<int, int> digit;
	if ((rect.width > 2) && (rect.height > 2)) {
		// preprocess
		digitAOI = src(cv::Rect(rect.x + 1, rect.y + 1, rect.width - 2, rect.height - 2));
		//imshow("digitAOI", digitAOI);
		cvtColor(digitAOI, digitAOIGray, CV_BGR2GRAY);
		//imshow("gray", digitAOIGray);
		threshold(digitAOIGray, digitAOIGray, 155, 255, cv::THRESH_BINARY);
		//imshow("thres", digitAOIGray);
		bitwise_not(digitAOIGray, digitAOIGray);
		imshow("not", digitAOIGray);
		//cv::dilate(digitAOIGray, digitAOIGray, element);
		//morphologyEx(digitAOIGray, digitAOIGray, cv::MORPH_CLOSE, element);
		//imshow("close", digitAOIGray);

		// split the area by pixels based on contours
		std::vector<std::vector<cv::Point>> contours;
		std::vector<cv::Vec4i> hierarchy;
		cv::findContours(digitAOIGray, contours, hierarchy, CV_RETR_CCOMP, CV_CHAIN_APPROX_SIMPLE);
		//std::cout << "\ncontour:" << rect.size() << "\tcontours count:" << contours.size() << "\n";
		float eachHeight = 0;
		float eachY = digitAOIGray.rows;
		for (int i = 0; i < contours.size(); i++) {
			cv::Rect bb = cv::boundingRect(contours[i]);
			float area = contourArea(contours[i]);
			if ((area < (digitAOIGray.rows * digitAOIGray.cols / 4))
				//&& (area > 20)	// should be 5 contours
				&& (bb.width < rect.width / 4)	// should be 5 contours
				&& (hierarchy[i][3] < 0)
				&& (bb.height > 2)
				) {
				// update height for each contour
				if (bb.height < eachHeight * 0.8) {
					bb.height = eachHeight;
					bb.y = eachY;
				}
				else if (eachHeight < bb.height) {
					if (eachY > bb.y)
						eachY = bb.y;
					eachHeight = bb.height;
				}
			}
		}
		for (int i = 0; i < contours.size(); i++) {
			cv::Rect bb = cv::boundingRect(contours[i]);
			float area = contourArea(contours[i]);
			if ((area< (digitAOIGray.rows * digitAOIGray.cols / 4))
				//&& (area > 20)	// should be 5 contours
				&& (bb.width < rect.width / 4)	// should be 5 contours
				&& (hierarchy[i][3] < 0)
				&& (bb.height > 2)
				) {
				// update height for each contour
				if (bb.height < eachHeight * 0.8) {
					bb.height = eachHeight;
					bb.y = eachY;
				}

				cv::Mat seperateDigit = digitAOIGray(bb);
				imshow("sep-" + std::to_string(i), seperateDigit);
				imwrite("sep-" + std::to_string(i) + ".jpg", seperateDigit);
				//imwrite("sep-" + std::to_string(i)+".jpg", seperateDigit);
				// detect the number based on seperateDigit
#ifdef DEBUG
				std::cout << "contour " << i << "\size:" << contourArea(contours[i]) << "\n";
#endif // DEBUG
				int ret = cmp2source(seperateDigit, checkChildren(hierarchy, i));
				// insert the result with x coordinate to map
				digit[bb.x] = ret;
			}
			//}
			//break;
			//}			
		}
		// return exact results
		translate2num(digit);
		//test
		// 		int idx = 0;
		// 		for (; idx >= 0 && hierarchy.size()>0; idx = hierarchy[idx][0]) {
		// 			cv::Scalar color(255-idx*10, 255 - idx*10, 255 - idx*10);
		// 			drawContours(digitAOIGray, contours, idx, color, -1, 8, hierarchy);
		// 		}
		// 		imshow("contour", digitAOIGray);
	}

}

void Recognition::initialDigit()
{
	// initialize digit
	for (int i = 0; i <= 9; i++) {
		cv::Mat mat = cv::imread(std::to_string(i) + ".jpg");
		if (mat.size().area() > 0) {
			cvtColor(mat, mat, CV_BGR2GRAY);
			digitsSource.push_back(mat);
		}
	}
	std::vector<int> child0;
	child0.push_back(1); child0.push_back(2); child0.push_back(3); child0.push_back(4); child0.push_back(5); child0.push_back(7);
	childIdx.push_back(child0);
	std::vector<int> child1;
	child1.push_back(0); child1.push_back(6); child1.push_back(9);
	childIdx.push_back(child1);
	std::vector<int> child2;
	child2.push_back(8);
	childIdx.push_back(child2);
}

void Recognition::translate2num(std::map<int, int> digit)
{
	result = 0;
	std::map<int, int>::iterator it = digit.begin();
	int i = 1;
	std::cout << "real result\n";
	for (; it != digit.end(); it++, i++) {
		std::cout << it->second;
		result += it->second * pow(10, digit.size() - i);
	}
	std::cout << "\n";
}

int Recognition::cmp2source(cv::Mat input, int child)
{
	cv::Size size1 = input.size();
	int maxPer = 0;
	int ret = -1;
	for (int i = 0; i < childIdx[child].size(); i++) {
		int idx = childIdx[child][i];
		cv::Size size2 = digitsSource[idx].size();
		cv::Size size = cv::Size(max(size1.width, size2.width), max(size1.height, size2.height));

		cv::Mat input2 = cv::Mat::zeros(size, input.type());
		resize(input, input2, size);
		//input.copyTo(input2(cv::Rect(0, 0, input.cols, input.rows)));

		cv::Mat source2 = cv::Mat::zeros(size, input.type());
		resize(digitsSource[idx], source2, size);
		//digitsSource[i].copyTo(source2(cv::Rect(0,0, digitsSource[i].cols, digitsSource[i].rows)));

		cv::Mat res;
		cv::compare(input2, source2, res, cv::CMP_EQ);
		int percentage = countNonZero(res);
#ifdef DEBUG
		std::cout << "compare to " << idx << " similar:" << percentage << "\n";
#endif // DEBUG

		if (percentage > maxPer) {
			maxPer = percentage;
			ret = idx;
		}
		//input.copyTo(input2);
		//digitsSource[i].copyTo(source2);
		//cv::Mat diff = source2 - input2;
	}
	return ret;
}

int Recognition::checkChildren(std::vector<cv::Vec4i> hierachy, int idx)
{
	int childCnt = 0;
	if (hierachy[idx][2] < 0)
		return 0;

	for (int j = hierachy[idx][2]; j != -1; j = hierachy[j][0])
		++childCnt;
	return childCnt;
}

void Recognition::selectAOI(int event, int x, int y, int flags, void* userdata)
{
	cv::Point p = cv::Point(x, y);
	switch (event) {
	case CV_EVENT_LBUTTONDOWN:
		//start the area of interest
		aoiPt1 = cv::Point(x, y);
		bPressDown = true;
		break;
	case CV_EVENT_LBUTTONUP:
		//end the selection
		//aoiPt2 = cv::Point(x, y);
		bPressDown = false;
		break;
	case CV_EVENT_MOUSEMOVE:
		// draaaaaaaaaag
		if (bPressDown) {
			aoiPt2 = cv::Point(x, y);
			rect = cv::Rect(aoiPt1, aoiPt2);
		}
		break;
	}
}

void Recognition::imageProcess()
{
	generateLive();
	drawAOI();
	cv::imshow("live", src);
	detectDigit();
}

void Recognition::drawAOI()
{
	cv::rectangle(src, rect, cv::Scalar(50, 0, 0), 1);
}
