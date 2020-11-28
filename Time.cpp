//
// Created by francesco on 20/11/20.
//

#include "Time.h"
#include "iostream"
#include "Qtime"

Time::Time(){
    QTime c = QTime::currentTime();
    hour = c.hour();
    minute = c.minute();
    second = c.second();
}
void Time::setTime(int s, int m, int h) {
    if ( h < 0 || h > 23 )
        hour = QTime::currentTime().hour();
    else
        hour = h;

    if ( m < 0 || m > 59 )
        minute = QTime::currentTime().minute();
    else
        minute = m;

    if ( s < 0 || s > 59 )
        second = QTime::currentTime().second();
    else
        second = s;
}
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
    if (m < 0 || m > 59)
        minute = QTime::currentTime().minute();
    else
        minute = m;
}
void Time::setSecond(int s) {
    if (s < 0 || s > 59)
        minute = QTime::currentTime().second();
    else
        second = s;
}
void Time::setHour(int h) {
    if (h < 0 || h > 23)
        hour = QTime::currentTime().hour();
    else
        hour = h;
}
const Time &Time::getTime() {
    return *this;
}