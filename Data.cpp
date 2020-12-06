//
// Created by francesco on 20/11/20.
//

#include "Data.h"
#include "QData"


Date::Data() {
    QDate c = QDate::currentDate();
    day = c.day();
    month = c.month();
    year = c.year();
    dayOf = c.dayOfWeek();
    leapYear = c.isLeapYear(year);
    checkDayOf();
    checkMonthOf();
}

void Date::checkDayOf(){
    switch ( dayOf ) {
        case 1:
            strDayOf = "lunedì";
            break;
        case 2:
            strDayOf = "martedì";
            break;
        case 3:
            strDayOf = "mercoledì";
            break;
        case 4:
            strDayOf = "giovedì";
            break;
        case 5:
            strDayOf = "venerdì";
            break;
        case 6:
            strDayOf = "sabato";
            break;
        case 7:
            strDayOf = "domenica";
            break;
    }

}
Date &Date::getData(){
    return *this;
}
int Date::getDay(){
    return day;
}
int Date::getMonth(){
    return month;
}
int Date::getYear(){
    return year;
}
void Date::setDay(int d) {

}
void Date::setDate(int d, int m, int y) {

}
