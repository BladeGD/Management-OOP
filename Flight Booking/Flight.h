#pragma once

#include "Time.h"
#include "Date.h"
#include <string>

using namespace std;


class Flight
{
public:
	Flight();
	Flight(string,string,string, int, int, int, int, int, int, int, int, int, int, int, int);
	string getFlightID();
	string getDepCity();
	string getArrCity();
	void setDepTime(int&, int&, int&);
	void setDepDate(int&, int&, int&);
	void setArrTime(int&, int&, int&);
	void setArrDate(int&, int&, int&);
	void setflightID(string);
	void setDepCity(string);
	void setArrCity(string);
	void getDepTime();
	void getDepDate();
	void getArrTime();
	void getArrDate();
	void printFlightInfo();
	~Flight();

private:
	string ID;
	Time depTime;
	Time arrTime;
	Date depDate;
	Date arrDate;
	string DepCity;
	string ArrCity;

};