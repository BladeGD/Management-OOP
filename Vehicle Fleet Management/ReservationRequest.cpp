/*

ReservationRequest.cpp

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/





#include <iostream>
#include "ReservationRequest.h"

using namespace std;

ReservationRequest::ReservationRequest() {
	vehicle_type = " ";
	number = 0;
	requestNumber = 0;
	requestCounter = 0;	
}
/*
ReservationRequest::ReservationRequest(string& n, string& l, const Date* d, string type, int num, int rN, int rC,int sD,int sM,int eD,int eM) {
	customer.setName(n);
	customer.setLicense(l);
	customer.setDateOfBirth(d);
	vehicle_type = type;
	number = num;
	requestNumber = rN;
	requestCounter = rC;
	reservationStartDate.setDate(sD, sM, year); //rent start
	reservationEndDate.setDate(eD, eM, year); //rent end
}
*/
ReservationRequest::ReservationRequest(Customer c, string type, int num, int rN, int rC, int sD, int sM, int eD,int eM){
	customer = c;
	vehicle_type = type;
	number = num;
	requestNumber = rN;
	requestCounter = rC;
	reservationStartDate.setDate(sD, sM, year);
	reservationEndDate.setDate(eD, eM, year);
}

/*
ReservationRequest::ReservationRequest(const Customer* c, char* type, int num, int rN, int rC, int sD, int sM, int eD, int eM) {
	customer = *c;
	vehicle_type = type;
	number = num;
	requestNumber = rN;
	requestCounter = rC;
	reservationStartDate.setDate(sD, sM, year);
	reservationEndDate.setDate(eD, eM, year);
}
*/

void ReservationRequest::printRequest(){
	cout << "Request number: " << requestNumber << endl;
	customer.printCustomerInfo();
	cout << "Vehicle type: " << vehicle_type << endl;
	if (vehicle_type == "car")
		cout << "Capacity: " << number << endl;
	else if (vehicle_type == "truck")
		cout << "Weight limit: " << number << endl;
	else {
		cout << "Invalid Entry - Please enter car or truck for vehicule type!" << endl;
	}
	cout << "Start date: ";
	reservationStartDate.printDate();
	cout << "End date: ";
	reservationEndDate.printDate();

}

string ReservationRequest::getVehiculeType() const{
	return vehicle_type;
}

int ReservationRequest::getNumber(){ // returns capacity if car, returns weight limit if truck 
	return number;
}

Date ReservationRequest::getStartDate(){
	return reservationStartDate;
}

Date ReservationRequest::getEndDate(){
	return reservationEndDate;
}

int ReservationRequest::getRequestNumber() {
	return requestNumber;
}

Customer ReservationRequest::getCustomer() {
	return customer;
}

