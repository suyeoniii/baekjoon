#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <int> v;
	int L, P;
	cin >> L >> P;

	for (int i = 0; i < 5; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	int total = L * P;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] - total << ' ';
	}


}