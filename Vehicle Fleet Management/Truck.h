/*

Truck.h

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/





#pragma once

#include"Date.h"
#include"Vehicle.h"
using namespace std;

class Truck : public Vehicle {
public:
	Truck();
	Truck(int, int, const char*, const char*);
	Truck(Truck &); //copy constructor
	void printTruck();

	void setWeightLimit(int);
	int getWeightLimit();
	~Truck();

protected:
	int weight;
};

