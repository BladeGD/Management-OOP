/*
Booking.cpp
Teng Zhao: 40089560
Thomas Flynn: 40034877
*/

#include "Booking.h"
#include "Flight.h"
#include "Passenger.h"

Booking::Booking(){
	seatNum = " ";
	passenger = nullptr;
	flight = nullptr;
}

Booking::Booking(Passenger* a, Flight* b, string c) {
	passenger = a;
	flight = b;
	seatNum = c;
	if(! (b->isFull())){
		if (addPassenger(a)) {
			b->addPassenger(a);
			cout << "Booking Successful!" << endl;
		}
	}
	else {
		passenger = nullptr;
		flight = nullptr;
		cout << "Booking Failed! Try again!" << endl;
	}
}

void Booking::setSeatNum(string a) {
	seatNum = a;
}

bool Booking::addPassenger(Passenger* p) { 
	if (p->addBooking(this)) {
		passenger = p;
		return true;
	}
		return false;
}


string Booking::getSeatNum() {
	return seatNum;
}

void Booking::print() {
	cout << "----------" << endl;
	cout << "Booking:" << endl;
	cout << "Seat Number: " << seatNum << endl;
	passenger->print();
	cout << "Flight: " << flight->getFlightNum() << endl;
}