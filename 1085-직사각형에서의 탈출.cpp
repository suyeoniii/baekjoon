#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int ans = 0;
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	w = w - x;
	h = h - y;

	ans = min(x, y);
	ans = min(ans, w);
	ans = min(ans, h);

	cout << ans;
}