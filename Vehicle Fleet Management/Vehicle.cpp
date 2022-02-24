/*

vehicle.cpp

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/




#include <iostream>
#include <array>
#include <cstring>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle() {
	model = NULL;
	joinedDate;
	mileage = 0;
	vID = NULL;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			available[i][j] = true;
		}
	}
}

Vehicle::Vehicle(int mileage1, const char* model1, const char* vID1) {
	model = new char[strlen(model1)+1];
	strcpy_s(model, strlen(model1) + 1, model1);
	joinedDate;
	mileage = mileage1;
	vID = new char[strlen(vID1)+1];
	strcpy_s(vID, strlen(vID1) + 1, vID1);
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			available[i][j] = true;
		}
	}
}

void Vehicle::setModel(const char* model1) {
	model = new char[strlen(model1) + 1];
	strcpy_s(model, strlen(model1) + 1, model1);
}

char* Vehicle::getModel()const {
	return model;
}

void Vehicle::setJoined(int d, int m, int y) {
	joinedDate.setDate(d, m, y);
}

void Vehicle::getJoined() {
	joinedDate.printDate();
}

void Vehicle::setMileage(int mileage) {
	this->mileage = mileage;
}

int Vehicle::getMileage() {
	return mileage;
}

void Vehicle::setID(const char* vID1) {
	vID = new char[strlen(vID1)+1];
	strcpy_s(vID, strlen(vID1) + 1, vID1);
}

char* Vehicle::getID() const{
	return vID;
}

void Vehicle::setRentDate(int m, int d) {

	if (available[m-1][d-1] == true) {
		cout << "Vehicle rent confirmed for " << m << " " << d << endl;
		available[m-1][d-1] = false;
	}
	else {
		cout << "Vehicle is already rented, try another date.";
	}
}

void Vehicle::getRentedDates() {

	cout << "Vehicle is rented on: " << endl;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			if (available[i][j] == false)
			{
				cout << "- " << i+1 << " " << j+1 << endl;
			}
		}
	}
}

void Vehicle::getRented(int m, int d) {
	if (available[m-1][d-1] == true) {
		cout << "Vehicle not rented on " << m << " " << d << endl;
	}
	
	if (available[m-1][d-1] == false) {
		cout << "Vehicle rented on " << m << " " << d << endl;
	}
}

bool Vehicle::isRented(Date sD, Date eD) {
	if (sD.getMonth() == eD.getMonth()) { //Check when same month
		for (int a = sD.getDay() - 1; a <= eD.getDay() - 1; a++) {
			if (available[sD.getMonth() - 1][a] == false) {
				return true;
			}
		}
	}

	if (sD.getMonth() != eD.getMonth()) { //Check when not same month

		for (int x = sD.getDay() - 1; x < 30; x++) { //Check start date till end of month
			if (available[sD.getMonth() - 1][x] == false) {
				return true;
			}
		}

		if (eD.getMonth() - sD.getMonth() < 1) { //Check all days of between months
			for (int i = sD.getMonth() + 1; i < sD.getMonth() - 1; i++) {
				for (int j = 0; j < 30; j++) {
					if (available[i - 1][j] == false) {
						return true;
					}
				}
			}
		}

		for (int y = 0; y < eD.getDay() - 1; y++) { //Check start of end month till end date
			if (available[eD.getMonth() - 1][y] == false) {
				return true;
			}
		}
	}
	return false;
}

void Vehicle::setRentPeriod(Date sD, Date eD) {
	if (sD.getMonth() == eD.getMonth()) { //Rents the vehicle
		for (int a = sD.getDay() - 1; a <= eD.getDay() - 1; a++) {
			available[sD.getMonth() - 1][a] = false;
		}
	}

	if (sD.getMonth() != eD.getMonth()) { 

		for (int x = sD.getDay() - 1; x < 30; x++) { //Rent start day till end of start month
			available[sD.getMonth() - 1][x] = false;
		}

		if (eD.getMonth() - sD.getMonth() < 1) { //Rent all days of between months
			for (int i = sD.getMonth() + 1; i < sD.getMonth() - 1; i++) {
				for (int j = 0; j < 30; j++) {
					available[i - 1][j] = false;
				}
			}
		}

		for (int y = 0; y < eD.getDay() - 1; y++) { //Rent start of end month till end date
			available[eD.getMonth() - 1][y] = false;
		}
	}
}

void Vehicle::setCancelPeriod(Date sD, Date eD) {
	if (sD.getMonth() == eD.getMonth()) { //Frees the vehicle
		for (int a = sD.getDay() - 1; a <= eD.getDay() - 1; a++) {
			available[sD.getMonth() - 1][a] = true;
		}
	}

	if (sD.getMonth() != eD.getMonth()) {

		for (int x = sD.getDay() - 1; x < 30; x++) { //Free start day till end of start month
			available[sD.getMonth() - 1][x] = true;
		}

		if (eD.getMonth() - sD.getMonth() < 1) { //Free all days of between months
			for (int i = sD.getMonth() + 1; i < sD.getMonth() - 1; i++) {
				for (int j = 0; j < 30; j++) {
					available[i - 1][j] = true;
				}
			}
		}

		for (int y = 0; y < eD.getDay() - 1; y++) { //Free start of end month till end date
			available[eD.getMonth() - 1][y] = true;
		}
	}
}

Vehicle::~Vehicle() {
	delete model;
	delete vID;
}