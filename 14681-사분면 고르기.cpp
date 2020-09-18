#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int x, y;
	int ans = 0;
	cin >> x >> y;

	if (x > 0) {
		if (y > 0) {
			ans = 1;
		}
		else if(y<0){
			ans = 4;
		}
	}
	else if(x<0){
		if (y > 0) {
			ans = 2;
		}
		else if(y<0){
			ans = 3;
		}
	}
	cout << ans;
}