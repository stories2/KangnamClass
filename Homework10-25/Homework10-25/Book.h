#pragma once
#include <iostream>

using namespace std;

class Book {
	char *title;
	int price;
public:
	Book(char *title, int price);
	~Book();
	void set(char *title, int price);
	void show() {
		cout << title << " " << price << "¿ø" << endl;
	}
	Book(Book &);
};

Book::Book(char *title, int price) {
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);

	this->price = price;
}

Book::~Book() {
	delete[] title;
	title = NULL;
}

void Book::set(char *title, int price) {
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);

	this->price = price;
}

Book::Book(Book &book) {
	int len = strlen(book.title);
	this->title = new char[len + 1];
	strcpy(this->title, book.title);

	this->price = book.price;
}