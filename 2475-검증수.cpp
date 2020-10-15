#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int ans = 0;
	int n1, n2, n3, n4, n5;
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	n1 = pow(n1, 2);
	n2 = pow(n2, 2);
	n3 = pow(n3, 2);
	n4 = pow(n4, 2);
	n5 = pow(n5, 2);

	ans = n1 + n2 + n3 + n4 + n5;
	ans = ans % 10;
	cout << ans
}