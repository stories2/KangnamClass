#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person {
	string name, tel;
public:
	Person();
	string getName() {
		return name;
	}
	string getTel() {
		return tel;
	}
	void set(string name, string tel);
};

Person::Person() {
	this->name = "";
	this->tel = "";
}

void Person::set(string name, string tel) {
	this->name = name;
	this->tel = tel;
}