//
// Created by francesco on 06/12/20.
//

#ifndef TIMER_LABPROGR_SUBJECT_H
#define TIMER_LABPROGR_SUBJECT_H

#include "HEADERS.h"

class Subject {

    virtual void attach (Observer *observer) = 0;
    virtual void detach (Observer *observer) = 0;
    virtual void notify()=0;

    virtual ~Subject(){};
};


#endif //TIMER_LABPROGR_SUBJECT_H
