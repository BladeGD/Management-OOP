/*

Payment.h

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/




#pragma once
#include <string>
#include <iostream>

using namespace std;


class Payment {
protected:

	float amtPayment;

public:

	Payment();
	Payment(float);
	Payment(Payment&);
	float getAmtPay();
	void setAmtPay(float);
	virtual void paymentDetails();
	virtual ~Payment();

};

