//
// Created by MariaAle y Omar on 4/24/2017.
//

#ifndef BUSSTOP_BUSSTOP_H
#define BUSSTOP_BUSSTOP_H


class BusStop {
private:
    char stopName;
    int durationToNext;
public:
    char getStopName() const;

    int getDurationToNext() const;

    void setStopName(char stopName);

    void setDurationToNext(int durationToNext);

};


#endif //BUSSTOP_BUSSTOP_H
