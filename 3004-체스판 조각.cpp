#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int N;
	int adder = 1;
	int ans = 1;
	cin >> N;

	for (int i = 1; i <= N;i++) {
		if(i%2==0) {
			ans += adder;
		}
		else{
			ans += adder;
			adder++;
		}
	}
	cout << ans;
}