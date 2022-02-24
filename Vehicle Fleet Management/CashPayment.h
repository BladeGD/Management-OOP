/*

CashPayment.h

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/

#pragma once
#include "payment.h"

class CashPayment : public Payment
{
public:

	CashPayment();
	CashPayment(float);
	~CashPayment();
	void paymentDetails();

};

