#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int num;
	cin >> num;
	int ans = 0;
	int a = num;
	int b = 0;

	
	while (1) {
		b = (a / 10) + (a % 10);
		a = (a % 10)*10 + b%10;
		ans += 1;

		if (a == num) {
			break;
		}
	}

	cout << ans;
}