#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int a;
	int ans = 0;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		ans += i;
	}
	cout << ans;
}