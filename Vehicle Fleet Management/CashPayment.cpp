/*

CashPayment.cpp

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/




#include "CashPayment.h"

using namespace std;

CashPayment::CashPayment() {
}

CashPayment::CashPayment(float aP) : Payment(aP) {
}

void CashPayment::paymentDetails() {

	Payment::paymentDetails();
	cout << "Payement was delivered in cash" << endl;
}

CashPayment::~CashPayment() {

	//nothing yet

}