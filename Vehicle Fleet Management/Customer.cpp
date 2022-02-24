/*

Customer.cpp

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/




#include "Customer.h"

using namespace std;


Customer::Customer()
{
	name = " ";
	license = " ";
	dateOfBirth;
}

Customer::Customer(Customer &c){ // Copy constructor
	name = c.getName();
	license = c.getLicense();
	dateOfBirth = c.getDateOfBirth();
}

Customer::Customer(string n, string l, const Date* d) { //regular constructor

	name = n;
	license = l;
	dateOfBirth = *d;

}

Customer::~Customer()
{
}


string Customer::getName() const
{
	return name;
}


string Customer::getLicense() const
{
	return license;
}


Date Customer::getDateOfBirth() const
{
	return dateOfBirth;
}


void Customer::printCustomerInfo()
{
	cout << "----Customer Info----" << endl << endl;
	cout << "Customer name: " << name << endl;
	cout << "Driver's License: " << license << endl;
	dateOfBirth.printDate();
}


void Customer::setName(string n)
{
	name = n;
}


void Customer::setLicense(string l)
{
	license = l;
}


void Customer::setDateOfBirth(const Date *d)
{
	dateOfBirth = *d;
}


void Customer::setDateOfBirth(int& d, int& m, int& y)
{
	dateOfBirth.setDate(d, m, y);
}
