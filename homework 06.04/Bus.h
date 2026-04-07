#pragma once
#include "Time_.h"

class Bus
{
private:
    Time_ startTime;
    Time_ finishTime;
    int lengthRoute;
    int EndStationBreak;
    

public:
    Bus(Time_ start, Time_ finish, int length, int Break);

    void generateBus()const;
};

