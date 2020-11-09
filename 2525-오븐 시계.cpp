#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int h, m, time;
	cin >> h >> m >> time;

	m += time;

	h += m / 60;
	m = m % 60;

	if (h>=24) {
		h = h % 24;
	}
	cout << h <<" "<< m;
}