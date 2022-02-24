/* date.h */
/*
Liam Thomas Flynn student-id: 40034877
Teng Zhao student-id:40089560

*/


#ifndef DATE_H_
#define DATE_H_

#include<string>
using namespace std;

class Date {
public:
	Date(int = 1, int = 1, int = 2000); // sets day, month, year
	void setDate(int&, int&, int&); // sets the date
	void printDate() const; // prints date to the screen
	string MonthInStr(); // prints months to the screen
	void newYear(); // prints if new year
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	void compareDates(Date&);

private:
	int day;
	int month;
	int year;
};

#endif /* DATE_H_ */