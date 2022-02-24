/*

Fleetmanager.h

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/


#pragma once
#include<array>
#include"Car.h"
#include"Truck.h"
#include"Customer.h"
#include"VehicleRentalContract.h"

class FleetManager {

public:
	FleetManager();
	void setCarArr(Car);
	void setTruckArr(Truck);
	void setCustomerArr(Customer);
	void setContractArr(ReservationRequest,Vehicle*,Payment*);
	int reservationNumber(ReservationRequest, Payment *p);
	void printContract(int);
	void cancelReservation(int, Date);
	void newMileage(Car, int);

	~FleetManager();

private:
	static const int carfleet_size = 2;
	static const int truckfleet_size = 2;
	array<Car*, carfleet_size> carArr;
	array<Truck*,truckfleet_size> truckArr;
	array<Customer*, carfleet_size+truckfleet_size> customerArr;
	array<VehicleRentalContract*, carfleet_size + truckfleet_size> contractArr;
	int numCars = 0;
	int numTrucks = 0;
	int numCustomer = 0;
	int numContract = 0;
};
