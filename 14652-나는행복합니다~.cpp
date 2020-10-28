#include <iostream>

using namespace std;

int main() {
	int N, M, S;
	int ans1, ans2;
	cin >> N >> M>>S;

	ans1 = S / M;
	ans2 = S % M;

	cout << ans1 << " " << ans2;
}