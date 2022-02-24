#include "Flight.h"


Flight::Flight() {
	ID = " ";
	DepCity = " ";
	ArrCity = " ";
	depDate;
	arrDate;
	depTime;
	arrTime;
}

Flight::Flight(string ID, string ArrCity, string DepCity, int h1, int m1, int s1, int h2, int m2, int s2, int D1, int M1, int Y1, int D2, int M2, int Y2) {
	this->ID = ID;
	this->ArrCity = ArrCity;
	this->DepCity = DepCity;
	depDate.setDate(D1, M1, Y1);
	cout << h1 << m1 << s1 << endl; 
	depTime.setTime(h1, m1, s1);
	arrDate.setDate(D2, M2, Y2);
	arrTime.setTime(h2, m1, s1);
}

string Flight::getFlightID() {
	return ID;
}

string Flight::getDepCity() {
	return DepCity;
}

string Flight::getArrCity() {
	return ArrCity;
}

void Flight::setDepTime(int& h, int& m, int& s) {
	depTime.setTime(h, m, s);
}

void Flight::setDepDate(int&d, int&m, int&y) {
	depDate.setDate(d, m, y);
}

void Flight::setArrTime(int&h, int&m, int&s) {
	arrTime.setTime(h, m, s);
}

void Flight::setArrDate(int&d, int&m, int&y) {
	arrDate.setDate(d, m, y);
}

void Flight::setflightID(string number) {
	ID = number;
}

void Flight::setDepCity(string city) {
	DepCity = city;
}

void Flight::setArrCity(string city) {
	ArrCity = city;
}

void Flight::getDepTime() {
	depTime.printTime();
}

void Flight::getDepDate() {
	depDate.printDate();
}

void Flight::getArrTime() {
	arrTime.printTime();
	cout << arrTime.getMinute(); // remove when done
}

void Flight::getArrDate() {
	arrDate.printDate();
}

void Flight::printFlightInfo() {
	cout << "-------Flight Info-------" << endl << endl;
	cout << "Flight id: " << ID << endl;
	cout << "Departure City: " << DepCity << endl;
	cout << "Arrival City: " << ArrCity << endl;
	cout << "Departure Date: ";
	depDate.printDate();
	cout << endl;
	cout << "Arrival Date: ";
	arrDate.printDate();
	cout << endl;
	cout << "Departure Time: ";
	depTime.printTime();
	cout << endl;
	cout << "Arrival Time: ";
	arrTime.printTime();
	cout << endl;
}

Flight::~Flight() {
}
