/*

Vehicle.h

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/



#pragma once

#include"Date.h"
using namespace std;

class Vehicle {
public:
	Vehicle();
	Vehicle(int, const char*, const char*);
	void setModel(const char*);
	char*getModel()const;
	void setJoined(int, int, int);
	void getJoined();
	void setMileage(int);
	int getMileage();
	void setID(const char*);
	char* getID() const;
	void setRentDate(int, int);
	void getRentedDates();
	void getRented(int, int);
	virtual int getCapacity() { return 0; };
	virtual void setCapacity() {};
	virtual int getWeightLimit() { return 0; };
	virtual void setWeightLimit() {};
	bool isRented(Date, Date);
	void setRentPeriod(Date, Date);
	void setCancelPeriod(Date, Date);


	~Vehicle();

protected:
	char* model;
	Date joinedDate;
	int mileage;
	char* vID;
	bool available[12][30];
};