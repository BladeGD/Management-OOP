#include "passenger.h"
#include <string>
#include <iostream>

using namespace std;

Passenger::Passenger()
{
	passengerId = 0;
	address = " ";
	name = " ";
	dateOfBirth;
}

Passenger::Passenger(int i, string n, string a, int d, int m, int y,string p) {
	passengerId = i;
	address = a;
	name = n;
	dateOfBirth.setDate(d, m, y);
	telephoneNum = p;
}


Passenger::~Passenger()
{
}


int Passenger::getId()
{
	return passengerId;
}


string Passenger::getName()
{
	return name;
}


string Passenger::getTelephone()
{
	return telephoneNum;
}


string Passenger::getAddress()
{
	return address;
}


void Passenger::getDateOfBirth()
{
	cout << "Date of Birth: " << dateOfBirth.getDay() << "/" << dateOfBirth.getMonth() << "/" << dateOfBirth.getYear() << endl;
}


void Passenger::printPassengerInfo()
{
	cout << "-------Passenger Info-------" << endl << endl;
	cout << "Passenger id: " << passengerId << endl;
	cout << "Passenger Name: " << name << endl;
	cout << "Date of Birth: " << dateOfBirth.getDay() << "/" << dateOfBirth.getMonth() << "/" << dateOfBirth.getYear() << endl;
	cout << "Address: " << address << endl;
	cout << "Phone number: " << telephoneNum << endl << endl;

}


void Passenger::setAddress(string &a)
{
	address = a;
}


void Passenger::setName(string &name)
{
	this->address = name;
}


void Passenger::setDateOfBirth(int &d,int &m,int &y)
{
	dateOfBirth.setDate(d, m, y);
}


void Passenger::setTelephone(string &tn)
{
	telephoneNum = tn;
}


void Passenger::setId(int &id)
{
	passengerId = id;
}
