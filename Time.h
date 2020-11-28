//
// Created by francesco on 20/11/20.
//

#ifndef TIMER_LABPROGR_TIME_H
#define TIMER_LABPROGR_TIME_H

#include <string>
#include "QString"

class Time {
private:
    int second, minute, hour;
    std::string timeFormat;
    std::string timeString;

public:
    Time();
    void setTime(int s, int m, int h);

    int getSecond() const;
    int getMinute()const;
    int getHour()const;


    void setSecond(int second);
    void setMinute(int minute);
    void setHour(int hour);

    void setTimeFormat(const std::string &timeFormat);

    QString &getTimeFormat();
    std::string &getTimeString();

    const Time &getTime();

};


#endif //TIMER_LABPROGR_TIME_H
