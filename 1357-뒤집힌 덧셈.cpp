#include <iostream>

using namespace std;

int reverse(int num) {
	int temp = 0;
	for (int i = 1; num / i != 0; i *= 10) {
		temp *= 10;
		temp += num % (i * 10)/i;
	}
	return temp;
}

int main() {
	int a, b;
	cin >> a >> b;

	int ans = reverse(a) + reverse(b);
	ans = reverse(ans);
	cout << ans;
}