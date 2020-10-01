#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		int sum = 1 + i;
		if (30 % sum == 0) {
			cout << i << "\n";
			continue;
		}
	}
}