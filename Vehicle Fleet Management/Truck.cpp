/*

Truck.cpp

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/




#include <iostream>
#include "Truck.h"

using namespace std;

Truck::Truck() {

}

Truck::Truck(int weight1, int mileage1, const char* model1, const char* vID1) :Vehicle(mileage1, model1, vID1) {
	weight = weight1;
}

Truck::Truck(Truck &t) {
	weight = t.getWeightLimit();
	mileage = t.getMileage();
	model = t.getModel();
	vID = t.getID();
}

void Truck::setWeightLimit(int weight1) {
	weight = weight1;
}

int Truck::getWeightLimit() {
	return weight;
}

Truck::~Truck() {
}

void Truck::printTruck() {
	cout << "Model: " << model << endl;
	cout << "ID: " << vID << endl;
	cout << "Weight Limit: " << weight << endl;
	cout << "Mileage: " << mileage << endl;
}