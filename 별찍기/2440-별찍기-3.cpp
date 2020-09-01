#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int N;
	cin >> N;

	for (int i = N; i > 0; i--) {
		for (int j = N-i; j < N; j++) {
			cout << "b";
		}
		for (int j = 0; j < i; j++) {
			cout << '*';
		}
		cout << endl;
	}

}