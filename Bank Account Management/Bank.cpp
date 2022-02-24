
/*
Bank.cpp
Teng Zhao: 40089560
Thomas Flynn: 40034877
*/

#include "Bank.h"

Bank::Bank() {
	bankID = " ";
	name = " ";
	bankAddress = " ";
	bankNumber = " ";
}

Bank::Bank(string a, string b, string c, string d) {
	bankID = a;
	name = b;
	bankAddress = c;
	bankNumber = d;
}

void Bank::setName(string a) {
	name = a;
}

void Bank::setBankAddress(string a) {
	bankAddress = a;
}

void Bank::setBankNumber(string a) {
	bankNumber = a;
}

void Bank::addBranch (Branch* a){
	//add branch pointer to branchList
}

void Bank::removeBranch(string a){
	//filter using branchID and remove it from branchList
}

void Bank::listAccount(Branch*){
	//branch->printAccountList function
}

void Bank::listCustomer(Branch*){
	//branch->listCustomer function
}

void Bank::printBranch(Branch*){
	//branch->printBranch function
}

void Bank::printAccount(string a){
	//filter through each branch
	//in each branch filter through account list for the account number
	//branch->accountList->printAccount
}

void Bank::printCustomer(string a){
	//filter through each branch
	//in each branch filter through account list for the ownerList
	//ownerList->getCustomerID
}

void Bank::printBank() {
	cout << "----- Bank -----" << endl;
	cout << "ID: " << bankID << endl;
	cout << "Name: " << name << endl;
	cout << "Address: " << bankAddress << endl;
	cout << "Phone Number: " << bankNumber << endl;
}