#include "strategy.h"

Strategy::Strategy()
{
    baseTime = QTime(11,29,30);
    addPrice = 0;
    finalPrice = 0;
    prepareTime = 0;
    preparePrice = 0;
    locked = false;
}

Strategy::Strategy(QTime bTime, int aPrice, int fPrice, int pTime, int pPrice)
{
    baseTime = bTime;
    addPrice = aPrice;
    finalPrice = fPrice;
    preparePrice = pPrice;
    prepareTime = pTime;
    locked = false;
}

void Strategy::updateStrategy(QTime curTime, int curPrice)
{
    if(!locked){
        if(curTime >= baseTime){
            locked = true;
            finalPrice = curPrice + addPrice;
        }
    }
}

bool Strategy::triggerMouse(QTime curTime, int curPrice)
{
    // check if curPrice > final price - add price
    if(finalPrice > 0){
        if((finalPrice - preparePrice <= curPrice) || (QTime(11,30,00).addSecs(-prepareTime) <= curTime)){
            // reset
            finalPrice = 0;
            return true;
        }
    }
    return false;
}
