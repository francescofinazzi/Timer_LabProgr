//
// Created by francesco on 27/11/20.
//

#ifndef TIMER_LABPROGR_COUNTER_H
#define TIMER_LABPROGR_COUNTER_H

#include "QObject"
#include <list>
#include <string>
#include "Time.h"
#include "Data.h"
#include "QTimer"
#include "Observer.h"

class Counter : public QObject {
private:
    Data data;
    Time time;
    std::list <Observer *> observers;
    std::string strTime;
    std::string strDate;

public:
    Counter();

    void subscribe(Observer *o);
    void unsubscribe(Observer *o);
    void notify();
    Time &getTime();
    Data &getDate();
    Counter &getCounter();

    void setDateFormat(std::string &format);
    void setTimeFormat(std::string &format);

    ~Counter(){
        for ( auto &i: observers )
            unsubscribe(i);
    }

    void increase();

    std::string &getStringTime();
    std::string &getStringDate();
};


#endif //TIMER_LABPROGR_COUNTER_H
