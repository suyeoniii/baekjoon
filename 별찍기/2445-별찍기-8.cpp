#include <iostream>
#include <vector>

using namespace std;

int main() {

	int N;
	int num;
	cin >> N;

	for (int i = N; i > 0; i--) {

		num = N - i+1;
		for (int j = 0; j < num; j++) {
			cout << '*';
		}
		for (int j = 0; j < 2 * i - 2; j++) {
			cout << ' ';
		}
		for (int j = 0; j < num; j++) {
			cout << '*';
		}
		cout << endl;
	}

	for (int i = N; i > 0; i--) {

		num = N - i;
		for (int j = 0; j < i - 1; j++) {
			cout << '*';
		}
		for (int j = 0; j < 2 * num + 2; j++) {
			cout << ' ';
		}
		for (int j = 0; j < i - 1; j++) {
			cout << '*';
		}
		cout << endl;
	}

}