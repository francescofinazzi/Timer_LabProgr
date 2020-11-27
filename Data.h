//
// Created by francesco on 20/11/20.
//

#ifndef TIMER_LABPROGR_DATA_H
#define TIMER_LABPROGR_DATA_H

#include <QtCore/QString>
#include <string>

class Data {
private:
    int day, month, year;
    std::string dateFormat;
    bool leapYear;
    std::string monthOf;
    std::string strDayOf;
    std::string strDate;

public:
    Data();
    Data &getData();

    void setDate(int d, int m, int y);
    void setDay(int d);

    int getDay();
    int getMonth();
    int getYear();

    std::string &getDateString();
    std::string &getMonthOf();
    std::string &getdayof();
    bool getLeapYear();

    std::string &getDateFormat();
};


#endif //TIMER_LABPROGR_DATA_H
