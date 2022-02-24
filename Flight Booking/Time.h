#pragma once
#include <iostream>
using namespace std;

class  Time{

public:
	Time();
	Time(const Time&);
	Time(int, int, int);
	void setTime(int, int, int);
	void printTime();
	int getHour();
	int getMinute();
	int getSecond();
	~Time();

private:
	int hour;
	int minute;
	int second;

};