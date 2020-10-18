#include <iostream>
#include <vector>

using namespace std;

int main() {
	int ans = 0;
	for (int i = 0; i < 5; i++) {
		int a;
		cin >> a;
		ans += a;
	}
	cout << ans;
}
