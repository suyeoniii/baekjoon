#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int N;
	string ans = "";
	vector <string> v;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string a;
		cin >> a;
		v.push_back(a);
	}

	for (int i = 0; i < v[0].length(); i++) {
		if (v[0][i] != NULL) {
			ans += v[0][i];
		}
		for (int j = 1; j < v.size(); j++) {
			if (v[j][i] != ans[i]) {
				ans[(ans.length()) - 1] = '?';
				break;
			}
		}
	}
	cout << ans;
}