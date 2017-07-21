#ifndef DIGITRECOGNITION_H
#define DIGITRECOGNITION_H

#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/highgui/highgui.hpp>

#include <vector>
#include <map>

#include<QImage>

class DigitRecognition
{
public:
    DigitRecognition();
    ~DigitRecognition();

public:
    void setSource(QImage s);
    int getResult(){return result;}
    void setResult(int r){result = r;}
    std::map<int, int> detectDigit();

private:
    void initialDigit();
    virtual void translate2num(std::map<int, int> digit) = 0;
    int cmp2source(cv::Mat input, int child);
    int checkChildren(std::vector<cv::Vec4i> hierachy, int idx);

private:
    cv::Mat src;
    cv::Mat digitAOIGray;
    std::vector<cv::Mat> digitsSource;

    int result;
    std::vector<std::vector<int> > childIdx;
};

#endif // DIGITRECOGNITION_H
