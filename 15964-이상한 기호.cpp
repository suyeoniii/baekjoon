#include <iostream>

using namespace std;

int main() {
	long long A, B;

	cin >> A >> B;

	long long ans = (A + B) * (A - B);
	cout << ans;
}