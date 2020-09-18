#include <iostream>
#include <vector>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, num;
	vector<int> v;
	cin >> N >> num;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	for (int i = 0; i < v.size(); i++) {
		if (v[i] < num) {
			cout << v[i] << ' ';
		}
	}

}