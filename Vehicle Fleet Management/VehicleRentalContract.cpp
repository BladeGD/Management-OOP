/*

VehicleRentalContract.cpp

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/




#include "VehicleRentalContract.h"



VehicleRentalContract::VehicleRentalContract()
{
	customerRequest;
	isVehicleOut = false;
	cashPayment = nullptr;
	creditPayment = nullptr;
	rentedCar = nullptr;
	rentedTruck = nullptr;
}

VehicleRentalContract::VehicleRentalContract(VehicleRentalContract &VRC) { //copy constuctor 



}

/*
VehicleRentalContract::VehicleRentalContract(ReservationRequest RR, bool f, ) {


// To be determined if needed

}
*/

void VehicleRentalContract::setCustomerRequest(ReservationRequest RR) {

	customerRequest = RR;

}

void VehicleRentalContract::setCashPayment(CashPayment* cp) {

	cashPayment = cp;

}

void VehicleRentalContract::setCreditPayment(CreditCardPayment* ccp) {

	creditPayment = ccp;

}

void VehicleRentalContract::setCar(Car* c) {

	rentedCar = c;

}

void VehicleRentalContract::setTruck(Truck* t) {

	rentedTruck = t;

}

void VehicleRentalContract::setIsVehicleOut(bool f) {

	isVehicleOut = f;

}

ReservationRequest VehicleRentalContract::getCustomerRequest() {
	return customerRequest;
}


CashPayment VehicleRentalContract::getCashPayment() const {

	return *cashPayment;

}

CreditCardPayment VehicleRentalContract::getCreditPayment() const {

	return *creditPayment;

}

Car VehicleRentalContract::getCar() {

	return *rentedCar;

}

Truck VehicleRentalContract::getTruck() {

	return *rentedTruck;

}

bool VehicleRentalContract::IsVehicleOut() const {

	return isVehicleOut;

}


VehicleRentalContract::~VehicleRentalContract()
{
	rentedCar = nullptr;
	rentedTruck = nullptr;
	cashPayment = nullptr;
	creditPayment = nullptr;
}

int VehicleRentalContract::getRequestNumber() {
	return customerRequest.getRequestNumber();
}

void VehicleRentalContract::printContract() {

	customerRequest.printRequest();

	if(rentedCar != nullptr){
		rentedCar->printCar();
	}
	if(rentedTruck != nullptr){
		rentedTruck->printTruck();
	}
	if(cashPayment != nullptr){
		cashPayment->paymentDetails();
	}
	if(creditPayment != nullptr){
		creditPayment->paymentDetails();
	}

	cout << "Is the vehicle out: " << isVehicleOut << endl;
	cout << "-----------------------------------------" << endl;
}