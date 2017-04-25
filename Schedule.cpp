//
// Created by MariaAle y Omar on 4/24/2017.
//

#include "Schedule.h"
#include "Clock.h"
#include "BusStop.h"

Schedule::Schedule(int routeLength, const Clock &startingTime, int deptIncrementMinutes, int numberOfDepartures)
        : routeLength(routeLength), startingTime(startingTime), deptIncrementMinutes(deptIncrementMinutes),
          numberOfDepartures(numberOfDepartures)
{
    
}
