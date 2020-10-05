#include <iostream>

using namespace std;

int main() {
	long long n;  // 범위 0<=n<=90
	cin >> n;

	long long* fibonacci = new long long[n + 1]; //메모할 배열

	fibonacci[0] = 0;
	fibonacci[1] = 1;

	for (int i = 2; i <= n; i++) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2]; //fibonacci점화식
	}
	cout << fibonacci[n] << endl;
}