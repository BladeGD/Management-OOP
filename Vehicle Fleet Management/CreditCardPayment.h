/*

CreditCardPayment.h

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/

#pragma once
#include "payment.h"
#include "Date.h"
#include<string>

class CreditCardPayment : public Payment
{

private:
	string name;
	string creditCardNum;
	Date* expDate;


public:

	CreditCardPayment();
	CreditCardPayment(float, string, string, const Date*);
	CreditCardPayment(const CreditCardPayment *);

	string getCreditName();
	string getCreditCardNum();
	void setCreditName(string);
	void setCreditCardNum(string);
	Date* getDateExp();
	void setDateExp(Date*);

	~CreditCardPayment();
	void paymentDetails();

};


