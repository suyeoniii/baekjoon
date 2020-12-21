#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int y = 0;
	int m = 0;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int time;
		cin >> time;
		if (time < 30) {
			y += 10;
		}
		else if (time>=30&&time<=59) {
			y += 20;
		}
		else {
			y += (time / 30) * 10;
		}
		if (time < 60) {
			m += 15;
		}
		else if (time >= 60 && time <= 119) {
			m += 30;
		}
		else {
			m += (time / 60) * 15;
		}
	}
	if (y > m) {
		cout << "Y ";
		cout << y;
	}
	else if (y < m) {
		cout << "M ";
		cout << m;
	}
	else if (y == m) {
		cout << "Y " << "M " << m;
	}
}
