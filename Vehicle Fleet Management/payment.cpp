/*

Payment.cpp

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/




#include "Payment.h"

using namespace std;


Payment::Payment() { 
	amtPayment = 0; 
}

Payment::Payment(float aP) {
	amtPayment = aP; 
}

Payment::Payment(Payment& p) { 
	amtPayment = p.getAmtPay(); 
}

float Payment::getAmtPay() { 
	return amtPayment; 
}

void Payment::setAmtPay(float aP) { 
	amtPayment = aP; 
}

void Payment::paymentDetails() { 
	cout << "The amount paid: " << amtPayment << "$" << endl; 
}

Payment::~Payment() {

	//nothing yet

}


