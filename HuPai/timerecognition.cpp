#include "timerecognition.h"

TimeRecognition::TimeRecognition():DigitRecognition()
{
    retTime[0] = retTime[1] = retTime[2] = 0;
}

TimeRecognition::~TimeRecognition()
{

}

void TimeRecognition::translate2num(std::map<int, int> digit)
{
//    result = 0;
    retTime[0] = retTime[1] = retTime[2] = 0;
    std::map<int, int>::iterator it = digit.begin();
    int i = 1;
    int t = 5;
//        std::cout << "real result\n";
    for (; it != digit.end(); it++, i++, t--) {
        //std::cout << it->second;
        retTime[int(t/2)] += it->second * pow(10, t%2);
    }
    retQTime = QTime(retTime[2],retTime[1],retTime[0]);
//    DigitRecognition::setResult(result);
}

void TimeRecognition::recognize()
{
    std::map<int, int> digit = DigitRecognition::detectDigit();
    translate2num(digit);
}
