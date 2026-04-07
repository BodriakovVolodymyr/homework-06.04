#include "Schedule.h"

Schedule::Schedule(Time_ start, int lessonDur, int shortBr, int longBr, int longAfter, int lessons)
{
	startTime = { 9, 0, 0,true };
	lessonDuration = 45;
	shortBreak = 10;
	longBreak = 20;
	longBreakAfter = 3;
	totalLessons = 7;
}

void Schedule::generateSchedule() const
{
	Time_ tmp = startTime;
	while (totalLessons > 0)
	{
		tmp += lessonDuration;
		tmp += shortBreak;


	}
	if (totalLessons > 3)
	{
		tmp += longBreak;
		tmp -= shortBreak;
	}
}
