#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int N;
	vector<int> v;
	int ans = 0;
	int max = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	for (int i = v.size() - 1; i >= 0; i--) {
		if (v[i] > max) {
			ans += 1;
			max = v[i];
		}
	}
	cout << ans;
}