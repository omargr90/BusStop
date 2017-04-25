//
// Created by MariaAle y Omar on 4/24/2017.
//

#ifndef BUSSTOP_SCHEDULE_H
#define BUSSTOP_SCHEDULE_H


#include "BusStop.h"
#include "Clock.h"

class Schedule {
private:
    int routeLength;
    BusStop stops[];
    Clock startingTime;
    int deptIncrementMinutes;
    int numberOfDepartures;
public:
    Schedule(int routeLength, const Clock &startingTime, int deptIncrementMinutes, int numberOfDepartures);

};


#endif //BUSSTOP_SCHEDULE_H
