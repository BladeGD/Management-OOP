/*
Booking.h
Teng Zhao: 40089560
Thomas Flynn: 40034877
*/

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Passenger;
class Flight;

class Booking {

public:
	Booking();
	Booking(Passenger*, Flight*, string);
	void setSeatNum(string);
	bool addPassenger(Passenger*);
	string getSeatNum();
	void print();

private:
	Passenger* passenger;
	Flight* flight;
	string seatNum;

};