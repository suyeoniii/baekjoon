#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int h, m;
	cin >> h >> m;

	if (m >= 45) {
		m -= 45;
	}
	else{
		h -= 1;
		m = m - 45 + 60;
	}
	if (h<0) {
		h = 24 + h;
	}
	cout << h <<' '<< m;
	
}