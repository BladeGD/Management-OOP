/*

Car.cpp

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/


#include <iostream>
#include "Car.h"

using namespace std;

Car::Car() {

}

Car::Car(int capacity1, int mileage1, const char* model1, const char* vID1) :Vehicle(mileage1, model1, vID1) {
	capacity = capacity1;
}

Car::Car(Car &c) {
	capacity = c.getCapacity();
	mileage = c.getMileage();
	model = c.getModel();
	vID = c.getID();
}

void Car::setCapacity(int capacity1) {
	capacity = capacity1;
}

int Car::getCapacity(){
	return capacity;
}

Car::~Car() {
}

void Car::printCar() {
	cout << "Model: " << model << endl;
	cout << "ID: " << vID << endl;
	cout << "Capcity: " << capacity << endl;
	cout << "Mileage: " << mileage << endl;
}