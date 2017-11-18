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

	bool operator == (int price) {
		return this->price == price;
	}

	bool operator == (string title) {
		return this->title == title;
	}

	bool operator == (Book book) {
		return this->title == book.title && this->price == book.price && this->pages == book.pages;
	}
};