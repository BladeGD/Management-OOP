/*

CreditCardPayment.cpp

Teng Zhao: 40089560
Thomas Flynn: 40034877

*/




#include "CreditCardPayment.h"

using namespace std;


CreditCardPayment::CreditCardPayment() {
	name = " ";
	creditCardNum = " ";
	expDate = new Date();
}

CreditCardPayment::CreditCardPayment(float aP, string n, string creditCardNum, const Date* d) : Payment(aP) {

	name = n;
	this->creditCardNum = creditCardNum;
	expDate = new Date(*d);
}

CreditCardPayment::CreditCardPayment(const CreditCardPayment *) {

}

string CreditCardPayment::getCreditName() {
	return name;
}
string CreditCardPayment::getCreditCardNum() {
	return creditCardNum;
}

void CreditCardPayment::setCreditName(string n) {
	name = n;
}
void CreditCardPayment::setCreditCardNum(string cn) {
	creditCardNum = cn;
}

Date* CreditCardPayment::getDateExp() { //returns a pointer
	return expDate;
}

void CreditCardPayment::setDateExp(Date* d) {
	delete[] expDate;
	expDate = new Date(*d);
}

CreditCardPayment::~CreditCardPayment() {
	delete[] expDate;
}

void CreditCardPayment::paymentDetails() {
	Payment::paymentDetails();
	cout << "Payment was delievered by Credit Card" << endl;
	cout << "----Credit Card info----" << endl;
	cout << "Cardholder name: " << name << endl;
	cout << "Card #: " << creditCardNum << endl;
	cout << "Expiration Date of Card: ";
	expDate->printDate();
	cout << endl;
}