//
// Created by francesco on 20/11/20.
//

#ifndef TIMER_LABPROGR_DATA_H
#define TIMER_LABPROGR_DATA_H

#include "HEADERS.h"

class Date {
private:
    int day, month, year;
    bool leapYear;

public:
    Date(int day, int month, int year, int dayOfWeek, bool leapYear);
    Date &getData();

    void setDate(int d, int m, int y);
    void setDay(int d);
    void setLeapYear(bool leap);
    void setFormat(std::string f);
    void

    int getDay();
    int getMonth();
    int getYear();
    bool getLeapYear();

    std::string &getDateString();
    std::string &getMonthOf();
    std::string &getDayOf();
    std::string &getDateFormat();

    bool checkLeapYear(int y);
    void checkMonthOf();
    void checkDayOf();

};


#endif //TIMER_LABPROGR_DATA_H
