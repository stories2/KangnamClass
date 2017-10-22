#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person {
	int id;
	double weight;
	string name;
public :
	Person();
	Person(int, string);
	Person(int, string, double);
	void show() {
		cout << id << ' ' << weight << ' ' << name << endl;
	}
};

Person::Person() {
	id = 1;
	weight = 20.5;
	name = "Grace";
}

Person::Person(int id, string name) {
	this->id = id;
	this->name = name;
	weight = 20.5;
}

Person::Person(int id, string name, double weight) {
	this->id = id;
	this->name = name;
	this->weight = weight;
}