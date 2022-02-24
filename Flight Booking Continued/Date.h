/*
Date.h
Teng Zhao: 40089560
Thomas Flynn: 40034877
*/

#pragma once

#include <string>
using namespace std;

class Date {

public:
	Date();
	Date(int&, int&, int&);
	void setDate(int, int, int);
	void printDate() const;
	int getDay() const;
	int getMonth() const;
	int getYear() const;

private:
	int day;
	int month;
	int year;
};