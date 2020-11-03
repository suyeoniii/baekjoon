#include <iostream>
#include <math.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int ans1, ans2;;

	int A1,B1,C1,D1;
	cin >> A1 >> B1 >> C1 >> D1;
	ans1 = A1 + B1 + C1 + D1;

	int A2, B2, C2, D2;
	cin >> A2 >> B2 >> C2 >> D2;
	ans2 = A2 + B2 + C2 + D2;

	cout << max(ans1, ans2);
	
}