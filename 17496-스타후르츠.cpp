#include <iostream>

using namespace std;

int main() {
	int N, T, C, P;
	cin >> N >> T >> C >> P;

	int num = 0;
	num = N / T;
	if (N % T == 0) {
		num -= 1;
	}

	int ans = num * C * P;
	cout << ans;
}