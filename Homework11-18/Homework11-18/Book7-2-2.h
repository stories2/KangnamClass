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
		cout << title << " " << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() {
		return title;
	}

	friend bool operator == (Book &book, int price);
	friend bool operator == (Book &book, string title);
	friend bool operator == (Book &book, Book &book2);
};

bool operator == (Book &book, int price) {
	return book.price == price;
}

bool operator == (Book &book, string title) {
	return book.title == title;
}

bool operator == (Book &book, Book &book2) {
	return book.price == book2.price && book.pages == book2.pages && book.title == book2.title;
}