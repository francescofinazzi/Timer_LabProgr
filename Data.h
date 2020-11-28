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
    bool leapYear;
    std::string monthOf;
    std::string strDayOf;
    std::string strDate;
    std::string dateFormat;

public:
    Data();
    Data &getData();

    void setDate(int d, int m, int y);
    void setDay(int d);
    void setLeapYear(bool leap);
    void setFormat(std::string f);


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
