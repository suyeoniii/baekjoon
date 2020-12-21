#include <iostream>
#include <math.h>

using namespace std;

int main() {
	long long y = 0;
	long long m = 0;
	long long N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		long long time;
		cin >> time;
			y += (time / 30) * 10;
			if (time%30>=0) {
				y += 10;
			}
		
			m += (time / 60) * 15;
			if (time%60>=0) {
				m += 15;
			}
	}
	if (y < m) {
		cout << "Y ";
		cout << y;
	}
	else if (y > m) {
		cout << "M ";
		cout << m;
	}
	else if (y == m) {
		cout << "Y M " << m;
	}
}