#include "pricerecognition.h"
#include <QImage>

PriceRecognition::PriceRecognition():DigitRecognition()
{

}

PriceRecognition::~PriceRecognition()
{

}

void PriceRecognition::translate2num(std::map<int, int> digit)
{
    result = 0;
    std::map<int, int>::iterator it = digit.begin();
    int i = 1;
//        std::cout << "real result\n";
    for (; it != digit.end(); it++, i++) {
        //std::cout << it->second;
        result += it->second * pow(10, digit.size()-i);
    }
    DigitRecognition::setResult(result);
    //        std::cout << "\n";
}

void PriceRecognition::recognize()
{
    std::map<int, int> digit = DigitRecognition::detectDigit();
    translate2num(digit);
}
