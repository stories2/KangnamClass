#include "Person.h"

int main() {
	Person person[3];
	string search;
	int i;

	cout << "이름과 전화 번호를 입력해 주세요" << endl;
	for (i = 0; i < 3; i += 1) {
		string temp[2];
		cout << "사람 " << i + 1 << ">> ";
		cin >> temp[0];
		cin >> temp[1];
		person[i].set(temp[0], temp[1]);
	}

	cout << "모든 사람의 이름은 ";
	for (i = 0; i < 3; i += 1) {
		cout << person[i].getName() << " ";
	}
	cout << endl;

	cout << "전화번호 검색합니다. 이름을 입력하세요>>";
	cin >> search;
	for (i = 0; i < 3; i += 1) {
		if (search == person[i].getName()) {
			cout << "전화 번호는 " << person[i].getTel() << endl;
			return 0;
		}
	}
	return 0;
}