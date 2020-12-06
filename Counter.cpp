//
// Created by francesco on 27/11/20.
//
#include <QtCore/QTime>
#include "Counter.h"
#include "iostream"

Counter::Counter(){
    data = Date();
    time = Time();
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(increase()));
    timer->start(1000);
    increase();
}
void Counter::increase(){
    if ( time.getSecond() < 59 )
        time.setSecond(time.getSecond() + 1);
    else {
        time.setSecond(0);
        if ( time.getMinute() < 59 )
            time.setMinute(time.getMinute() + 1);
        else {
            time.setMinute(0);
            if ( time.getHour() < 23 )
                time.setHour(time.getHour() + 1);
            else {
                time.setHour(0);
                data.setDay(data.getDay() + 1);
            }

        }
    }
    notify();
}
void Counter::subscribe(Observer *o){
    observers.push_back(o);

}
void Counter::unsubscribe(Observer *o){
    observers.remove(o);
}
void Counter::notify(){
    for ( auto &i: observers )
        i->update();
}
Time &Counter::getTime(){
    return time;
}
Date &Counter::getDate(){
    return data;
}
Counter &Counter::getCounter(){
    return *this;

}
void Counter::setDateFormat(std::string &format){
    data.setFormat(format);

}
void Counter::setTimeFormat(std::string &format){
    time.setTimeFormat(format);
}
std::string &Counter::getStringDate(){

    return data.getDateString();
}
std::string &Counter::getStringTime(){
    return time.getTimeString();
}