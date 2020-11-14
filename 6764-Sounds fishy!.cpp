#include <iostream>
#include <string>
#include<math.h>

using namespace std;

int main() {
	int n1, n2, n3, n4;
	cin >> n1 >> n2 >> n3 >> n4;

	if (n1==n2&&n2==n3&&n3==n4&&n4==n1) {
		cout << "Fish At Constant Depth";
	}
	else if (n1<n2&&n2<n3&&n3<n4) {
		cout << "Fish Rising";
	}
	else if (n1 > n2 && n2 > n3 && n3 > n4) {
		cout << "Fish Diving";
	}
	else {
		cout << "No Fish";
	}
}