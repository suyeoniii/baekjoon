#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	int ans = 0;
	vector<int> v;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		if (a == 0) {
			v.pop_back();
		}
		else {
			v.push_back(a);
		}
	}

	for (int i = 0; i < v.size(); i++) {
		 ans+=v[i];
	}
	cout << ans;
}