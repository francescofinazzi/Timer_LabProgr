//
// Created by francesco on 27/11/20.
//

#ifndef TIMER_LABPROGR_COUNTER_H
#define TIMER_LABPROGR_COUNTER_H

#include "HEADERS.h"

class Counter : public Subject, public QObject {
    Q_OBJECT

    Counter();

    void subscribe(Observer *o);
    void unsubscribe(Observer *o);
    void notify();
    Time &getTime();
    Date &getDate();
    Counter &getCounter();

    void setDateFormat(std::string &format);
    void setTimeFormat(std::string &format);


    string getStringDate();

    string getStringTime();

    static Counter *getInstance();

    virtual ~Counter();

    void attach(Observer *o) override;

    void detach(Observer *o) override;

    void notify() override;

//public slots:
    //void increase();

private:
    Date data;
    Time time;
    std::list <Observer *> observers;
    std::string strTime;
    std::string strDate;
};
#endif //TIMER_LABPROGR_COUNTER_H
