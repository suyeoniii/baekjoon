#include <iostream>
#include <vector>

using namespace std;

int main() {
	int chess_total[6] = {1,1,2,2,2,8};
	int chess_found[6];

	for (int i = 0; i < 6; i++) {
		int a;
		cin >> a;
		chess_found[i] = a;
	}

	for (int i = 0; i < 6; i++) {
		cout << chess_total[i] - chess_found[i] << ' ';
	}
}
