#include <iostream>

using namespace std;

int main() {
	long long N, M;
	cin >> N >> M;

	long long ans = N - M;

	if (ans < 0) {
		cout<< -ans;
	}
	else {
		cout << ans;
	}

}