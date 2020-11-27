//
// Created by francesco on 20/11/20.
//

#include "Data.h"


Data::Data() {}

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
    doSomethingd();
}
void Data::setDate(int d, int m, int y) {
    doSomethingd();
}
