//
// Created by francesco on 20/11/20.
//

#include "Time.h"

Time::Time(){}

void Time::setTime(int s, int m, int h) {
    doSomethingt();
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
 doSomethingt();
}
void Time::setSecond(int s) {
   doSomethingt();
}
void Time::setHour(int h) {
    doSomethingt();
}

void Time::doSomethingt() {} //da togliere
