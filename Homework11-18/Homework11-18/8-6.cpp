#include "BaseArray8-6.h"

int main() {
	MyStack mStack(100);
	int n;
	cout << "���ÿ� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; i += 1) {
		cin >> n;
		mStack.push(n);
	}

	cout << "���ÿ뷮:" << mStack.capacity() << ", ����ũ��:" << mStack.length() << endl;
	cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ�>> ";

	while (mStack.length() != 0) {
		cout << mStack.pop() << ' ';
	}

	cout << endl << "������ ���� ũ�� : " << mStack.length() << endl;
}