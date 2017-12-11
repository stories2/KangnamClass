#pragma once
#include <iostream>
#include <string>

using namespace std;

class LoopAdder {
	string name;
	int x, y, sum;
	void read();
	void write();

protected:
	LoopAdder(string name = "") {
		this->name = name;
	}

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}

	virtual int calculate() = 0;

public:
	void run();
};

void LoopAdder::read() {
	cout << name << ":" << endl;
	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ��� >> ";
	cin >> x >> y;
}

void LoopAdder::write() {
	cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�" << endl;
}

void LoopAdder::run() {
	read();
	sum = calculate();
	write();
}