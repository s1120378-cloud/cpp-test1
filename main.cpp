#include <iostream>
using namespace std;

int main() {
	int score1, score2, score3;
	cout << "h+h<8e%3f,!ef8(0~100): ";
	cin >> score1 >> score2 >> score3;

	double averageScore = (score1 + score2 + score3) / 3.0;

	if (score1 < 40 || score2 < 40 || score3 < 40) {
		cout << "d8
e
f <\n";
	} else if (averageScore >= 60) {
		cout << "d= e
f <\n";
	} else {
		cout << "d8
e
f <\n";
	}

	cout << "d= ge93eg:: " << averageScore << endl;

	return 0;
}
