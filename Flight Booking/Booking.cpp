#include "Booking.h"
#include <iostream>
#include <string>

using namespace std;

Booking::Booking() {

	bookingNum = 0;
	seatNum = " ";
	passenger;
	flight;
}

Booking::Booking(int bn, string sn, int pID, string pName, string pAddress, int pDay, int pMonth, int pYear, string pTele, string ID, string ArrCity, string DepCity, int h1, int m1, int s1, int h2, int m2, int s2, int D1, int M1, int Y1, int D2, int M2, int Y2) {
	bookingNum = bn;
	seatNum = sn;
	Passenger passenger(pID, pName, pAddress, pDay, pMonth, pYear, pTele);
	Flight flight(ID, ArrCity, DepCity, h1, m1, s1, h2, m2, s2, D1, M1, Y1, D2, M2, Y2);
}

Booking::~Booking()
{
}


int Booking::getBookingNum() const
{
	return bookingNum;
}


Passenger Booking::getPassenger()
{
	return passenger;
}


Flight Booking::getFlight()
{
	return flight;
}


string Booking::getSeatNum() const
{
	return seatNum;
}


void Booking::setBookingNum(int &bn)
{
	bookingNum = bn;
}


void Booking::setFlight(string ID, string ArrCity, string DepCity, int h1, int m1, int s1, int h2, int m2, int s2, int D1, int M1, int Y1, int D2, int M2, int Y2)
{
	flight.setflightID(ID);
	flight.setArrCity(ArrCity);
	flight.setDepCity(DepCity);
	flight.setDepDate(D1, M1, Y1);
	flight.setDepTime(h1, m1, s1);
	flight.setArrDate(D2, M2, Y2);
	flight.setArrTime(h2, m2, s2);
}


void Booking::setPassenger(int& pID, string& pName, string& pAddress, int& pDay, int& pMonth, int& pYear, string& pTele)
{
	passenger.setId(pID);
	passenger.setName(pName);
	passenger.setAddress(pAddress);
	passenger.setDateOfBirth(pDay, pMonth, pYear);
	passenger.setTelephone(pTele);
}


void Booking::setSeatNum(string& sn)
{
	seatNum = sn;
}
