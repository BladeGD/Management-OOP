/* date.cpp */
/*
Liam Thomas Flynn student-id: 40034877
Teng Zhao student-id:40089560

*/
#include"Date.h"

#include <iostream>
#include <string>
#include <array>
#include "date.h"
using namespace std;

// Regular Constructor
Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}

// sets date
void Date::setDate(int& d, int& m, int& y)
{
	day = d;
	month = m;
	year = y;
}

// prints date
void Date::printDate() const
{
	cout << month << "/" << day << "/" << year << endl;
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

// prints month
string Date::MonthInStr()
{
	string n;
	const size_t arraySize = 12;
	array <string, arraySize> names{ "January","February","March","April","May","June","July","August","September","October","November","December" };
	n = names[month - 1];
	return n;
}

// checks new year
void Date::newYear()
{
	if (day == 1 && month == 1)
		cout << "Happy New Year!";
}

//comparedates
void Date::compareDates(Date& d) {
	int dDiff = abs(day - d.getDay());
	int mDiff = abs(month - d.getMonth());
	int yDiff = abs(year - d.getYear());

	if (dDiff == 0 && mDiff == 0 && yDiff == 0)
		cout << "Both dates are the same" << endl;
	else
		cout << "Both dates are " << dDiff << " day[s], " << mDiff << " month[s] and " << yDiff << " year[s] apart. " << endl;
}
