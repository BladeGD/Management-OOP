/*

testFleetMgr.cpp

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/




#include "FleetManager.h"
#include <iostream>
#include <string>
#include <array>

int main() {

	//setting all the objects used in this demonstration
	array<Date*, 3> d;
	d[0] = new Date(3, 5, 1978);
	d[1] = new Date(6, 7, 1680);
	d[2] = new Date(13, 02, 2019);

	Customer c1("John Doe", "USA145JD", d[0]);
	Customer c2("John Smith", "USA123JS", d[1]);

	

	CashPayment CP(250.55);
	CreditCardPayment CCP(350.55, c2.getName(), "5679832480", d[2]);

	Payment *pbuffer = nullptr;
	ReservationRequest *rbuffer = nullptr;

	pbuffer = &CP;

	

	ReservationRequest r1(c1, "car",5, 111, 1, 1, 2, 2, 2);
	ReservationRequest r2(c2, "car", 4, 112, 2, 2, 3, 30, 3);
	ReservationRequest r3(c1, "truck", 10000, 113, 3, 12, 12, 28, 12);
	ReservationRequest r4(c2, "truck", 9000, 114, 4, 3, 5, 26, 7); //Didnt have time to set all these request. 

	Car car1(5, 25000, "Honda Civic", "00001");
	Car car2(5, 25000, "Ford Focus", "00002");
	Truck truck1(10000, 25000, "Ford F-150", "00003");
	Truck truck2(10000, 25000, "Ford F-150", "00003");

	//setting Fleetmanager
	FleetManager f;

	f.setCarArr(car1);
	f.setCarArr(car2);
	f.setTruckArr(truck1);
	f.setTruckArr(truck2);
	f.setCustomerArr(c1);
	f.setCustomerArr(c2);

	cout << "Setting first customer: ";
	cout << f.reservationNumber(r1, pbuffer) << endl;
	f.printContract(r1.getRequestNumber());
	

	cout << "Setting second customer:";
	cout << f.reservationNumber(r2, pbuffer) << endl;
	f.printContract(r2.getRequestNumber());

	cout << "Setting third customer: ";
	cout << f.reservationNumber(r3, pbuffer) << endl;
	f.printContract(r3.getRequestNumber());

	cout << "Setting fourth customer: ";
	cout << f.reservationNumber(r4, pbuffer) << endl;
	f.printContract(r4.getRequestNumber());
	

	//Garbage collector
	/*
	for (Date* date : d) {
		delete[] date;
		date = nullptr;
	}
	*/
	system("pause");
	return 0;
}