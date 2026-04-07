#include "Schedule.h"

Schedule::Schedule(Time_ start, int lessonDur, int shortBr, int longBr, int longAfter, int lessons)
{
	startTime = start;
	lessonDuration = lessonDur;
	shortBreak = shortBr;
	longBreak = longBr;
	longBreakAfter = longAfter;
	totalLessons = lessons;

}

void Schedule::generateSchedule() const
{
	Time_ tmp = startTime;
	for (int i = 1; i <= totalLessons; i++)
	{
		cout << "Lesson " << i << ": ";
		tmp.showTime(); 

		tmp += lessonDuration;

		cout << " - ";
		tmp.showTime(); 

		
		if (i != totalLessons)
		{
			if (i == longBreakAfter)
				tmp += longBreak;
			else
				tmp += shortBreak;
		}
	}
}

