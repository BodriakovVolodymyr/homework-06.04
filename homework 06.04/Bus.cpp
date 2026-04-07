#include "Bus.h"

Bus::Bus(Time_ start, Time_ finish, int length, int Break)
{
	startTime = start;
	finishTime = finish;
	lengthRoute = length;
	EndStationBreak = Break;
}

void Bus::generateBus() const
{
	Time_ tmp = startTime;
	while (tmp < finishTime)
	{
		cout << tmp << " ";
		tmp += lengthRoute;
		if (tmp > finishTime)
			break;

		cout << tmp << endl;

		tmp += EndStationBreak;

	}
}
