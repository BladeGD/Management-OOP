#pragma once
#include "date.h"
class Passenger
{
public:
	Passenger();
	Passenger(int, string, string, int, int, int,string);
	~Passenger();
	int getId();
	string getName();
	string getTelephone();
	string getAddress();
	void getDateOfBirth();
	void printPassengerInfo();
	void setAddress(string &a);
	void setName(string &n);
	void setDateOfBirth(int &d, int &m, int &y);
	void setTelephone(string &tn);
	void setId(int &id);

private:
	int passengerId;
	string name;
	string address;
	string telephoneNum;
	Date dateOfBirth;

	
};

