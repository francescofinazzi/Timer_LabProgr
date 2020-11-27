//
// Created by francesco on 27/11/20.
//

#ifndef TIMER_LABPROGR_OBSERVER_H
#define TIMER_LABPROGR_OBSERVER_H



class Observer {
    virtual void update() = 0;
    virtual void attach () = 0;
    virtual void detach () = 0;

    virtual void ~Observer() {};
};
#endif //TIMER_LABPROGR_OBSERVER_H