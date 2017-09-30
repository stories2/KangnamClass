#include <iostream>

#define BUFFER_SIZE 100
#define NAME_SIZE 5

using namespace std;

int main() {
	char names[NAME_SIZE][BUFFER_SIZE] = { '\0', };
	int i;

	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요\n" << ">>";

	for (i = 0; i < NAME_SIZE; i += 1) {
		cin.getline(names[i], BUFFER_SIZE, ';');
		cout << i << " : " << names[i] << endl;
	}

	return 0;
}