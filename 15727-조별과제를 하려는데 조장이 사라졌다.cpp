#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int D;
	cin >> D;
	
	if (D % 5 == 0)
		cout << D / 5;
	else
		cout << D / 5 + 1;
}