#pragma once

/*
Bank.h
Teng Zhao: 40089560
Thomas Flynn: 40034877
*/

#include <iostream>
#include <string>
#include <array>
#include "Branch.h"
using namespace std;

class Bank {
public:
	Bank();
	Bank(string, string, string, string);
	void setName(string);
	void setBankAddress(string);
	void setBankNumber(string);
	void addBranch(Branch*);
	void removeBranch(string);
	void listAccount(Branch*); //list given branch's accounts
	void listCustomer(Branch*); //list given branch's customers
	void printBranch(Branch*); //print given branch's information
	void printAccount(string); //print given account's information
	void printCustomer(string); //print given customer's information
	void printBank();

protected:
	string bankID;
	string name;
	string bankAddress;
	string bankNumber;
	//Branch* branchList[];
};
