/*

Customer.h

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/




#pragma once

#include "date.h"
#include <string>
#include <iostream>

class Customer
{
public:
	Customer();
	Customer(string, string, const Date*);
	~Customer();
	Customer(Customer &);
	string getName() const;
	string getLicense() const;
	Date getDateOfBirth() const;
	void printCustomerInfo();
	void setName(string);
	void setLicense(string);
	void setDateOfBirth(const Date *);
	void setDateOfBirth(int&, int&, int&);
private:
	string name;
	string license;
	Date dateOfBirth;

};

