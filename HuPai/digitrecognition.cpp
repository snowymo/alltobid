#include "digitrecognition.h"
#include <string>
#include <windows.h>
#include <QtGlobal>

DigitRecognition::DigitRecognition()
{
    initialDigit();
}

DigitRecognition::~DigitRecognition()
{

}

void DigitRecognition::setSource(QImage img)
{
    img.save("beforeconvert.jpg");
    img = img.convertToFormat(QImage::Format_RGB888).rgbSwapped();
//    img.save("afterconvert.jpg");
//    img = img.rgbSwapped();
//    img.save("afterswapped.jpg");
    /*src = */cv::Mat(img.height(), img.width(), CV_8UC3, img.bytesPerLine());

    // need to copy, maybe later we can use pointer
    src = cv::Mat(img.height(), img.width(), CV_8UC3, const_cast<uchar*>(img.bits()), img.bytesPerLine()).clone();

//    imwrite("convert2CV.jpg",src);
}

std::map<int, int> DigitRecognition::detectDigit()
{
    std::map<int, int> digit;

    //imshow("digitAOI", digitAOI);
    cvtColor(src, digitAOIGray, CV_BGR2GRAY);
//    imshow("gray", digitAOIGray);
    threshold(digitAOIGray, digitAOIGray, 155, 255, cv::THRESH_BINARY);
//    imshow("thres", digitAOIGray);
    bitwise_not(digitAOIGray, digitAOIGray);
//    imshow("not", digitAOIGray);

    //cv::dilate(digitAOIGray, digitAOIGray, element);
    //morphologyEx(digitAOIGray, digitAOIGray, cv::MORPH_CLOSE, element);

    // split the area by pixels based on contours
    std::vector<std::vector<cv::Point> > contours;
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
            && (bb.width < src.cols / 4)	// should be 5 contours
            && (hierarchy[i][3] < 0)
            && (bb.height > 2)
            ) {
            // update height for each contour
            if (eachHeight < bb.height) {
                if(eachY > bb.y)
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
            && (bb.width < src.cols / 4)	// should be 5 contours
            && (hierarchy[i][3] < 0)
            && (bb.height > 2)
            ) {
            // update height for each contour
            if (bb.height < eachHeight * 0.8) {
                bb.height = eachHeight;
                bb.y = eachY;
            }

            cv::Mat seperateDigit = digitAOIGray(bb);
//            cv::imshow("sep-" + QString::number(i).toStdString(), seperateDigit);
            cv::imwrite("sep-" + QString::number(i).toStdString() + ".jpg", seperateDigit);
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
    return digit;
    // return exact results
//    translate2num(digit);
    //test
}

void DigitRecognition::initialDigit()
{
    // initialize digit
    for (int i = 0; i <= 9; i++) {
        cv::Mat mat = cv::imread(QString::number(i).toStdString() + ".jpg");
        if (mat.size().area() > 0) {
            cvtColor(mat, mat, CV_BGR2GRAY);
            digitsSource.push_back(mat);
        }
//        cv::imwrite("testhupai.jpg",mat);
    }

    std::vector<int> child0;
    child0.push_back(1); child0.push_back(2); child0.push_back(3);  child0.push_back(5); child0.push_back(7);
    childIdx.push_back(child0);

    std::vector<int> child1;
    child1.push_back(0); child1.push_back(4); child1.push_back(6); child1.push_back(9);
    childIdx.push_back(child1);

    std::vector<int> child2;
    child2.push_back(8);
    childIdx.push_back(child2);
}



int DigitRecognition::cmp2source(cv::Mat input, int child)
{
    cv::Size size1 = input.size();
    int maxPer = 0;
    int ret = -1;
    for (int i = 0; i < childIdx[child].size(); i++) {
        int idx = childIdx[child][i];
        cv::Size size2 = digitsSource[idx].size();
        cv::Size size = cv::Size(qMax(size1.width, size2.width), qMax(size1.height, size2.height));

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

int DigitRecognition::checkChildren(std::vector<cv::Vec4i> hierachy, int idx)
{
    int childCnt = 0;
    if (hierachy[idx][2] < 0)
        return 0;

    for (int j = hierachy[idx][2]; j != -1; j = hierachy[j][0])
        ++childCnt;
    return childCnt;
}
