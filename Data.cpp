//
// Created by francesco on 20/11/20.
//

#include "Data.h"
#include "QData"


Data::Data() {
    QData c = QDate::currentDate();
    day = c.day();
    month = c.month();
    year = c.year();
    dayOf = c.dayOfWeek();
    leapYear = c.isLeapYear(year);
    checkDayOf();
    checkMonthOf();
}

void Data::checkDayOf(){
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
Data &Data::getData(){
    return *this;
}
int Data::getDay(){
    return day;
}
int Data::getMonth(){
    return month;
}
int Data::getYear(){
    return year;
}
void Data::setDay(int d) {

}
void Data::setDate(int d, int m, int y) {

}
