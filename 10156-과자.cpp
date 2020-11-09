#include <iostream>

using namespace std;

int main() {
	long long K, N, M;
	cin >> K >> N >> M;

	long long ans;
	ans = K * N-M;

	if (ans<0) {
		ans = 0;
	}

	cout << ans;
}