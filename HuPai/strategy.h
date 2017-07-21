#ifndef STRAGETY_H
#define STRAGETY_H

#include <QTime>

class Strategy
{
public:
    Strategy();
    Strategy(QTime bTime, int aPrice, int fPrice, int pTime, int pPrice);

public:
    int getFinalPrice(){return finalPrice;}
    void updateStrategy(QTime curTime, int curPrice);
    bool triggerMouse(QTime curTime, int curPrice);

    void setBTime(int h, int m, int s){baseTime = QTime(h,m,s);}
    void setAddPrice(int ap){addPrice = ap;}
    void setPreTime(int pt){prepareTime = pt;}
    void setPrePrice(int pp){preparePrice = pp;}

    void resetLocked(){locked = false;}

private:
    QTime baseTime;
    int addPrice;
    int finalPrice;
    int prepareTime;
    int preparePrice;
    bool locked;
};

#endif // STRAGETY_H
