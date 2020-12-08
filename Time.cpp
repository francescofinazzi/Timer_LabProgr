//
// Created by francesco on 20/11/20.
//

#include "HEADERS.h"

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

string Time::getFullString() const {
    string fullString;
    std::string sec = std::to_string(second);
    std::string min = std::to_string(minute);
    std::string h = std::to_string(hour);
    if (second < 10)
        sec = '0' + std::to_string(second);
    if (minute < 10)
        min = '0' + std::to_string(minute);
    if (hour < 10)
        h = '0' + std::to_string(hour);
    if (format == "12h Form") {
        string amOrPm;
        int tmpHours;
        if (hour >= 12)
            amOrPm = "PM";
        else
            amOrPm = "AM";
        tmpHours = (hour > 12 ? hour - 12 : hour);
        if (tmpHours < 10)
            h = "0" + std::to_string(tmpHours);
        fullString = h + " : " + min + " : " + sec + " " + amOrPm;
    } else {
        fullString = h + " : " + min + " : " + sec;
    }
    return fullString;
}