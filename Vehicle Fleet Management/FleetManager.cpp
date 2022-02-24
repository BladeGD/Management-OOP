/*

FleetManager.cpp

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/




#include"FleetManager.h"
#include <typeinfo>

using namespace std;

FleetManager::FleetManager() {

	
	for (int i = 0; i < carArr.size(); i++) {
		carArr[i] = nullptr;
	}

	for (int i = 0; i < truckArr.size(); i++) {
		truckArr[i] = nullptr;
	}

	for (int i = 0; i < customerArr.size(); i++) {
		customerArr[i] = nullptr;
	}

	for (int i = 0; i < contractArr.size(); i++) {
		contractArr[i] = nullptr;
	}
	
}

void FleetManager::setCarArr(Car c) { //The member function will always be called when a car is being reserved. Thus, we need parameters to set a car. 
	if (numCars < carfleet_size) {
		for (int i = 0; i < carfleet_size;i++) {
			if (carArr[i] == nullptr) {
				carArr[i] = new Car(c);
				numCars++;
				break;
			}
		}
	}
	else {
		cout << "All cars have already been set" << endl;
	}
}

void FleetManager::setTruckArr(Truck t) {
	if (numTrucks < truckfleet_size) {
		for (int i = 0; i < truckfleet_size;i++) {
			if (truckArr[i] == nullptr) {
				truckArr[i] = new Truck(t);
				numTrucks++;
				break;
			}
		}
	}
	else {
		cout << "All Trucks have been rented" << endl;
	}
}

void FleetManager::setCustomerArr(Customer c) { //set customers manually 
	if(numCustomer < (carfleet_size + truckfleet_size))
		for (int i = 0; i < customerArr.size(); i++) {
			if (customerArr[i] == nullptr) {
				customerArr[i] = new Customer(c);
				numCustomer++;
				break;
			}
		}
	else {
		cout << "All customers have been set!" << endl;
	}
}

void FleetManager::setContractArr(ReservationRequest RR, Vehicle* v, Payment *p) {
	if (numContract < (carfleet_size+truckfleet_size)) {
		for (int i = 0; i < contractArr.size(); i++) {
			if (contractArr[i] == nullptr) {

				//Setting the contract
				contractArr[i] = new VehicleRentalContract();
				contractArr[i]->setCustomerRequest(RR);

				if (typeid(*v).name() == "Car") {
					contractArr[i]->setCar(dynamic_cast<Car*>(v));
				}
				else {
					contractArr[i]->setTruck(dynamic_cast<Truck*>(v));
				}

				if (typeid(*p).name() == "CashPayment") {
					contractArr[i]->setCashPayment(dynamic_cast<CashPayment*>(p));
				}
				else {
					contractArr[i]->setCreditPayment(dynamic_cast<CreditCardPayment*>(p));
				}
				contractArr[i]->setIsVehicleOut(true);
				numContract++;
				break;
			}

		}
	}
	else {
		cout << "All Vehicules have been rented" << endl;
	}
}

int FleetManager::reservationNumber(ReservationRequest a, Payment *p) {//maybe add a payement object. 
	bool success = false;

	
	if (a.getVehiculeType() == "car") {
		for (int i = 0; i < carArr.size(); i++) {
			if (a.getNumber() <= carArr[i]->getCapacity()) {
				if (carArr[i]->isRented(a.getStartDate(),a.getEndDate()) == false) {
					success = true;
					setContractArr(a, carArr[i], p);
				}
			}
		}
	}


/*
//Need to figure out a way to get a payment method(ie. payment object) from the user 
//setContractArr(a, carArr[i],Payment object goes here); After filter is done, set contract array
	else if (a.getVehiculeType()=="truck") {
		
		for (int i = 0; i < truckArr.size(); i++) {
			if (a.getNumber <= truckArr[i]->getWeightLimit()) {
				// assign best suited truck

				//Need to figure out a way to get a payment method(ie. payment object) from the user 

				setContractArr(a, truckArr[i],Payment object goes here); // After filter is done, set contract array
				//if(a.)
			}
		}asd
	}
*/
	
	else if (a.getVehiculeType() == "truck") {
		for (int j = 0; j < truckArr.size(); j++) {
			if (a.getNumber() <= truckArr[j]->getWeightLimit()) {
				if (truckArr[j]->isRented(a.getStartDate(),a.getEndDate()) == false) {
					success = true;
					setContractArr(a, truckArr[j], p);
				}
			}
		}
	}
	

	if (success == true) {
		return a.getRequestNumber();
	}
	else {
		return 0;
	}
}

void FleetManager::printContract(int rN) {
	for (int i = 0; i < contractArr.size(); i++) {
		if (rN == contractArr[i]->getRequestNumber()) {
			cout << "---Contract---" << endl;
			contractArr[i]->printContract();
			break;
		}
	}
}

void FleetManager::cancelReservation(int rN, Date today) {
	for (int i = 0; i < contractArr.size(); i++) {
		if (rN == contractArr[i]->getRequestNumber()) {
			cout << "Cancellation for request #" << contractArr[i]->getCustomerRequest().getRequestNumber() << " processed on: ";
			today.printDate();
			cout << endl;


			if (contractArr[i]->getCustomerRequest().getVehiculeType() == "car") {
				contractArr[i]->getCar().setCancelPeriod(contractArr[i]->getCustomerRequest().getStartDate(), contractArr[i]->getCustomerRequest().getEndDate());
			}
			else if (contractArr[i]->getCustomerRequest().getVehiculeType() == "truck") {
				contractArr[i]->getTruck().setCancelPeriod(contractArr[i]->getCustomerRequest().getStartDate(), contractArr[i]->getCustomerRequest().getEndDate());
			}

			contractArr[i]->~VehicleRentalContract(); // all the links between the objects and pointers are being removed.
			delete[] contractArr[i]; // deleting the object created in the heap
			contractArr[i] = nullptr; // set pointer back to nullptr to be reused;
		}
	}
}

void FleetManager::newMileage(Car c, int newMileage) {
	c.setMileage(c.getMileage()+newMileage);
}

FleetManager::~FleetManager() {

	for (int i = 0; i < carArr.size(); i++) {
		if (carArr[i] != nullptr)
			delete carArr[i];
	}

	for (int i = 0; i < truckArr.size(); i++) {
		if (truckArr[i] != nullptr)
			delete truckArr[i];
	}

	for (int i = 0; i < customerArr.size(); i++) {
		if (customerArr[i] != nullptr)
			delete customerArr[i];
	}

	for (int i = 0; i < contractArr.size(); i++) {
		if (contractArr[i] != nullptr)
			delete contractArr[i];
	}
}