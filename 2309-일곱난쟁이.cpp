#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector <int> v;
	int sum = 0;
	int one = 0;
	int two = 0;

	for (int i = 0; i < 9; i++) {
		int a;
		cin >> a;

		v.push_back(a);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		for (int j = i + 1; j < v.size(); j++) {
			sum = 0;
			for (int k = 0; k < v.size(); k++) {
				if (k != i && k != j) {
					sum += v[k];
				}
			}
			if (sum == 100) {
				one = i;
				two = j;
				break;
			}
		}
	}
	for (int i = 0; i < v.size(); i++) {
		if (i != one && i != two) {
			cout << v[i] << endl;
		}
	}
}