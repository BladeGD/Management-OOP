/*

Car.h

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/


#pragma once

#include"Date.h"
#include"Vehicle.h"
using namespace std;

class Car : public Vehicle {
public:
	Car();
	Car(int, int, const char*, const char*);
	Car(Car&); //copyconstructor
	void printCar();

	virtual void setCapacity(int);
	virtual int getCapacity();
	~Car();

protected:
	int capacity;
};
