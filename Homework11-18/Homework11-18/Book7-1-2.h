#pragma once
#include <iostream>
#include <string>

using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	void show() {
		cout << title << " " << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() {
		return title;
	}

	friend Book operator += (Book &book, int won);
	friend Book operator -= (Book &book, int won);
};

Book operator += (Book &book, int won) {
	book.price = book.price + won;
	return book;
}

Book operator -= (Book &book, int won) {
	book.price = book.price - won;
	return book;
}