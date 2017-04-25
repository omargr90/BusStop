//
// Created by MariaAle y Omar on 4/24/2017.
//

#include "BusStop.h"
#include "Clock.h"
#include "Schedule.h"

char BusStop::getStopName() const {
    return stopName;
}

void BusStop::setStopName(char stopName) {
    BusStop::stopName = stopName;
}

void BusStop::setDurationToNext(int durationToNext) {
    BusStop::durationToNext = durationToNext;
}

int BusStop::getDurationToNext() const {
    return durationToNext;
}
