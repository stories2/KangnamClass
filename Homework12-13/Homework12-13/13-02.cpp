#include <iostream>

using namespace std;

char checkScore(int);

int main() {
	int score;

	cin >> score;
	try {
		cout << checkScore(score) << endl;
	}
	catch (char *s) {
		cout << s << endl;
	}

}

char checkScore(int score) {
	if (score < 0 || score > 100) {
		throw "잘못된 점수";
	}
	if (score < 60) {
		return 'F';
	}
	else if (score < 70) {
		return 'D';
	}
	else if (score < 80) {
		return 'C';
	}
	else if (score < 90) {
		return 'B';
	}
	else if (score <= 100) {
		return 'A';
	}
}