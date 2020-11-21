//
// Created by francesco on 20/11/20.
//

#ifndef TIMER_LABPROGR_TIME_H
#define TIMER_LABPROGR_TIME_H


class Time {
private:
    int second, minute, hour;

public:
    Time();
    void setTime(int s, int m, int h);

    int getSecond() const;
    int getMinute()const;
    int getHour()const;


    void setSecond(int second);
    void setMinute(int minute);
    void setHour(int hour);

};


#endif //TIMER_LABPROGR_TIME_H
