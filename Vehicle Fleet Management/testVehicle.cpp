/*

testVehicle.cpp

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/



/*
#include<iostream>
#include "Vehicle.h"
#include"Car.h"
#include"Truck.h"

using namespace std;

int main() {

	Vehicle v(9000, "Toyota", "2009");

	cout << v.getModel() << endl;
	cout << v.getID() << endl;
	cout << v.getMileage() << endl;

	v.setJoined(22, 6, 2019);
	v.getJoined();
	cout << endl;

	v.setRentDate(8,2);
	v.setRentDate(6, 22);
	
	
	v.getRentedDates();
	v.getRented(6, 21);
	v.getRented(8, 2);
	v.getRented(6, 22);

	cout << "-------------------------" << endl;

	Car c(5,3000,"Subaru","2019");
	cout << c.getModel() << endl;
	cout << c.getID() << endl;
	cout << c.getMileage() << endl;

	c.setJoined(4, 9, 2019);
	c.getJoined();
	cout << endl;
	cout << c.getCapacity() << " passengers" << endl;

	c.setRentDate(2, 14);
	c.setRentDate(12, 25);

	c.getRentedDates();
	c.getRented(2, 14);
	c.getRented(12, 25);
	c.getRented(7, 26);

	cout << "-------------------------" << endl;

	Truck t(200, 56000, "Ford", "2019");
	cout << t.getModel() << endl;
	cout << t.getID() << endl;
	cout << t.getMileage() << endl;

	t.setJoined(5, 6, 2017);
	t.getJoined();
	cout << endl;
	cout << t.getWeightLimit() << " lb" << endl;

	t.setRentDate(11, 4);
	t.setRentDate(6, 30);

	t.getRentedDates();
	t.getRented(11, 4);
	t.getRented(6, 30);
	t.getRented(1, 1);

	system("pause");	
}
/*
#include "Customer.h"
#include <string>
#include <iostream>

using namespace std;

int main() {

Date *d = new Date(3, 1, 1990);
string a = "fd";
string b = "fdg";
Customer *c = new Customer(a, b,d);

c->printCustomerInfo();
int
c->setDateOfBirth(15, 13, 1990);
c->setName("John Smith");
c->setLicense("1000-000-001");


cout << "New name: " << c.getName() << endl;
cout << "new license number: " << c.getLicense() << endl;
cout << "new date of birth: " << endl;
c->getDateOfBirth().printDate();




delete d;
delete c;
system("pause");
return 0;
}
*/
