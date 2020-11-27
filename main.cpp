#include <iostream>
#include "Data.h"
#include "Time.h"

int main() {
    Time t;
    Data d;

    d.setDate(14, 8,1998 );
    d.setDay(14);

    t.setTime(00, 00, 12);

    return 0;
}
