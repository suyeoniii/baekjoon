#include <iostream>
#include <string>
#include<math.h>

using namespace std;

int main() {
	int ans = 0;
	string hexa;
	cin >> hexa;

	for (int i = 0; i < hexa.length(); i++) {
		int h = hexa.length() - (i + 1);
		if (hexa[i] >= 48 && hexa[i] <= 57) {
			ans += (hexa[i] - 48) * pow(16,h);
		}
		else {
				ans += (hexa[i] - 55) * pow(16, h);
		}
	}
	cout << ans;


	
}