#ifndef TIMERECOGNITION_H
#define TIMERECOGNITION_H

#include <QTime>
#include "digitrecognition.h"

class TimeRecognition : public DigitRecognition
{
public:
    TimeRecognition();
    ~TimeRecognition();

public:
    void translate2num(std::map<int,int> digit);
    void recognize();
    QTime getTime(){return retQTime;}
    int* getRetTime(){return retTime;}

private:
    int retTime[3];
    QTime retQTime;
};

#endif // TIMERECOGNITION_H
