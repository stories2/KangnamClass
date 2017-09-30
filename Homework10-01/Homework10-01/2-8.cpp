#include <iostream>

#define BUFFER_SIZE 100
#define NAME_SIZE 5

using namespace std;

int main() {
	char names[NAME_SIZE][BUFFER_SIZE] = { '\0', };
	int i, maxLength = -0x7fffffff, maxLengthPoint;

	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요\n" << ">>";

	for (i = 0; i < NAME_SIZE; i += 1) {
		cin.getline(names[i], BUFFER_SIZE, ';');
		cout << i + 1<< " : " << names[i] << endl;

		int length = strlen(names[i]);

		if (maxLength < length) {
			maxLength = length;
			maxLengthPoint = i;
		}
	}

	cout << "가장 긴 이름은 " << names[maxLengthPoint] << endl;

	return 0;
}