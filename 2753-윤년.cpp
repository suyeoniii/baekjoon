#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int y;
	int ans = 0;
	cin >> y;
	
	if (y % 4 == 0 && y % 100 != 0) {
		ans = 1;
	}
	else if (y % 400 == 0) {
		ans = 1;
	}
	cout << ans;
}