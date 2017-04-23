#ifndef _LIVE_CAPTURE
#define _LIVE_CAPTURE


#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/highgui/highgui.hpp>
#include <Windows.h>
#include <map>


class LiveCapture
{
public:
	LiveCapture();
	~LiveCapture();

public:
	static void selectAOI(int event, int x, int y, int flags, void* userdata);
	void imageProcess();

private:
	void drawAOI();
	cv::Mat generateLive();
	void detectDigit();
	void initialDigit();
	void translate2num(std::map<int, int> digit);
	int cmp2source(cv::Mat input, int child);
	int checkChildren(std::vector<cv::Vec4i> hierachy, int idx);

private:
	int height, width, srcheight, srcwidth;
	HBITMAP hbwindow;
	HWND hwnd;
	HDC hwindowDC, hwindowCompatibleDC;
	cv::Mat src;
	cv::Mat digitAOI, digitAOIGray;
	std::vector<cv::Mat> digitsSource;
	
	int result;
	std::vector<std::vector<int>> childIdx;
};
static cv::Rect rect;
static cv::Point aoiPt1, aoiPt2;
static bool bPressDown = false;


#endif