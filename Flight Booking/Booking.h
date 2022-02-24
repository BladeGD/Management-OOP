#pragma once
#include "Passenger.h"
#include "Flight.h"
#include <string>

class Booking{
public:
	Booking();
	Booking(int, string, int, string, string, int, int, int, string, string, string, string, int, int, int, int, int, int, int, int, int, int, int, int);
	~Booking();
	int getBookingNum() const;
	Passenger getPassenger();
	Flight getFlight();
	string getSeatNum() const;
	void setBookingNum(int&);
	void setFlight(string, string, string, int, int, int, int, int, int, int, int, int, int, int, int);
	void setPassenger(int&, string&, string&, int&, int&, int&, string&);
	void setSeatNum(string&);

private:
	int bookingNum;
	Passenger passenger;
	Flight flight;
	string seatNum;
};

