#include <iostream>
#include <math.h>

using namespace std;

int main() {
	for (int i = 0; i < 3; i++) {
		int h1, m1, s1, h2, m2, s2;
		cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

		int h = 0;
		int m = 0;
		int s = 0;

		s += s2 - s1;
		s = s % 60;
		if (s<0){
			s += 60;
			m += -1;
		}
		else {
			m += s / 60;
		}
	
		m += m2 - m1;
		m = m % 60;
		if (m < 0) {
			m += 60;
			h += -1;
		}
		else {
			h += m / 60;
		}

		h += h2 - h1;

		cout << h << " " << m << " " << s << "\n";
	}
}