#include <iostream>

using namespace std;

int main() {
	int N, F;
	cin >> N >> F;
	int temp = N/100;
	int ans = -1;

	for (int i = 0; i < 10; i++){
		N = temp * 100 + i * 10;
		for (int j = 0; j < 10; j++) {
			if (N % F == 0) {
				ans = N % 100;
				break;
			}
			N = N + 1;
		}
		if (ans != -1) {
			break;
		}
	}
	if (ans < 10) {
		cout << 0 << ans;
	}
	else {
		cout << ans;
	}
}