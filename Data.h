//
// Created by francesco on 20/11/20.
//

#ifndef TIMER_LABPROGR_DATA_H
#define TIMER_LABPROGR_DATA_H


class Data {
private:
    int day, month, year;
    char name;

public:
    Data();
    Data &getData();

    void setDate(int d, int m, int y, char n);
    void setDay(int d, char n);

    int getDay();
    int getMonth();
    int getYear();
};


#endif //TIMER_LABPROGR_DATA_H
