/*

ReservationRequest.h

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/





#pragma once

#include "Date.h"
#include "Customer.h"
#include "Car.h"
#include "Truck.h"
#include "CreditCardPayment.h"
#include "CashPayment.h"

using namespace std;

class ReservationRequest {
public:
	ReservationRequest();
	//ReservationRequest(string&, string&, const Date*, string, int, int, int, int, int, int, int);
	ReservationRequest(Customer, string,int, int, int, int, int, int, int);
	//servationRequest(const Customer*, char*, int, int, int, int, int, int, int, CashPayment);
	void printRequest();
	string getVehiculeType() const;
	int getNumber();
	Date getStartDate();
	Date getEndDate();
	int getRequestNumber();
	Customer getCustomer();

protected:
	Customer customer;
	string vehicle_type;
	int number;
	int requestCounter;
	int requestNumber;
	Date reservationStartDate;
	Date reservationEndDate;

private:
	int year = 2019;
};
