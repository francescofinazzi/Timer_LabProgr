//
// Created by francesco on 27/11/20.
//

#ifndef TIMER_LABPROGR_OBSERVER_H
#define TIMER_LABPROGR_OBSERVER_H



class Observer {
public:
    virtual void update() = 0;
    virtual ~Observer();
};
#endif //TIMER_LABPROGR_OBSERVER_H