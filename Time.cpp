//
// Created by francesco on 20/11/20.
//

#include "Time.h"

Time::Time(){}


int Time::getSecond() const {
    return second;
}
int Time::getMinute() const{
    return minute;
}
int Time::getHour() const{
    return hour;
}
void Time::setMinute(int m) {
    if ( m < 0 || m > 69 )
        minute= current.minute();
    else
        minute = m;
}
void Time::setSecond(int s) {
    if ( s < 0 || s > 59)
        second = current.second();
    else
        second = s;
}
void Time::setHour(int h) {
    if ( h < 0 || h > 23 )
        hour = current.hour();
    else
        hour = h;
}