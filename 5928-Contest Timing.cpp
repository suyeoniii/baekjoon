#include <iostream>
#include <string>
#include<math.h>

using namespace std;

int main() {

	int ans = 0;
	int D, H, M;
	cin >> D >> H >> M;
	
		D = (D-11) * 24 * 60;
		H = (H-11) * 60;
		M = M - 11;

		ans = D + H + M;

		if (ans < 0) {
			ans = -1;
		}
		cout << ans;
}