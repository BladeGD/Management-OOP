/*

VehicleRentalContract.h

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/




#pragma once
#include "CashPayment.h"
#include "CreditCardPayment.h"
#include "Car.h"
#include "Truck.h"
#include "ReservationRequest.h"

class VehicleRentalContract
{
public:
	VehicleRentalContract(); //defaultConstructor
	VehicleRentalContract(VehicleRentalContract&); //copyConstructor
												   //VehicleRentalContract(); //regularConstructor

												   //setters
	void setCustomerRequest(ReservationRequest);
	void setIsVehicleOut(bool);
	void setCreditPayment(CreditCardPayment*);
	void setCashPayment(CashPayment*);
	void setCar(Car*);
	void setTruck(Truck*);
	int getRequestNumber();
	void printContract();

	//getters
	ReservationRequest getCustomerRequest();
	CreditCardPayment getCreditPayment() const;
	CashPayment getCashPayment() const;
	Car getCar() ;
	Truck getTruck() ;
	bool IsVehicleOut() const;

	~VehicleRentalContract();

private:
	Car * rentedCar;
	Truck* rentedTruck;
	CashPayment *cashPayment;
	CreditCardPayment *creditPayment;
	ReservationRequest customerRequest;
	bool isVehicleOut;
};

