#include <iostream>
#include <string>

#define YEAR 0
#define MONTH 1
#define DAY 2

using namespace std;

class Date {
	int year, month, day;
public:
	Date(int, int, int);
	Date(string );
	
	int getYear();
	int getMonth();
	int getDay();

	void show();
};

Date::Date(int year, int month, int day) {
	this->year = year;
	this->month = month;
	this->day = day;
}

Date::Date(string dateString) {
	int pos, counter = 0;
	string indexOfItem, splitChar = "/";

	while ((pos = dateString.find(splitChar)) != string::npos) {
		indexOfItem = dateString.substr(0, pos);
		dateString.erase(0, pos + splitChar.length());

		switch (counter)
		{
		case YEAR:
			year = stoi(indexOfItem);
		case MONTH:
			month = stoi(indexOfItem);
		case DAY:
			day = stoi(indexOfItem);
		default:
			break;
		}

		counter += 1;
	}
}

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

void Date::show() {
	cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");

	independenceDay.show();

	cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << endl;

	return 0;
}