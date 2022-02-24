#include"Time.h"

Time::Time() {
	hour = 0;
	minute = 0;
	second = 0;
}

Time::Time(int h, int m, int s) {
	hour = (h >= 0 && h <= 24) ? h : 0;
	minute = (m >= 0 && m <= 60) ? m : 0;
	second = (s >= 0 && s <= 60) ? s : 0;
	cout << "went here";
}

Time::Time(const Time&Time) {
	hour = Time.hour;
	minute = Time.minute;
	second = Time.second;
}

void Time::setTime(int h, int m, int s) {
	hour = (h >= 0 && h <= 24) ? h : 0;
	minute = (m >= 0 && m <= 60) ? m : 0;
	second = (s >= 0 && s <= 60) ? s : 0;
	
}

void Time::printTime() {
	cout << " " << hour << ":" << minute << ":" << second << " ";
}

int Time::getHour() {
	return hour;
}

int Time::getMinute() {
	return minute;
}

int Time::getSecond() {
	return second;
}

Time::~Time() {
}