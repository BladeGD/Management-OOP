/*
Date.cpp
Teng Zhao: 40089560
Thomas Flynn: 40034877
*/

#include<iostream>
#include<array>
#include<string>
#include "Date.h"

using namespace std;

Date::Date(){
	day = 1;
	month = 1;
	year = 2000;
}

Date::Date(int& a, int& b, int& c) {
	day = a;
	month = b;
	year = c;
}

void Date::setDate(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}

void Date::printDate() const {
	cout << month << "/" << day << "/" << year;
}

int Date::getDay() const {
	return day;
}

int Date::getMonth() const {
	return month;
}

int Date::getYear() const {
	return year;
}
