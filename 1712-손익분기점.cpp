#include <iostream>

using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;

	int ans = 0;
	int profit = C - B;

	ans = A / profit;

	ans += 1;

	if(profit<=0) {
		cout << -1;
	}
	else {
		cout << ans;
	}

}