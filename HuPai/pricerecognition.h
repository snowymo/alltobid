#ifndef PRICERECOGNITION_H
#define PRICERECOGNITION_H

#include "digitrecognition.h"

class PriceRecognition : public DigitRecognition
{
public:
    PriceRecognition();
    ~PriceRecognition();

public:
    void translate2num(std::map<int,int> digit);
    void recognize();

private:
    int result;
};

#endif // PRICERECOGNITION_H
