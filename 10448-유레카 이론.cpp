#include <iostream>
#include <vector>
using namespace std;

int cal(int num) {
	return (num * (num + 1)) / 2;
}

int main() {
	int T;
	vector<int> v;
	vector<int> ans;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	for (int i = 0; i < v.size(); i++) {
		int answer = 0;
		for (int j = 1; j<=44; j++) {
			for (int k = 1; k<44; k++) {
				for (int r = 1; r<=44; r++) {
					if (cal(j) + cal(k) + cal(r) == v[i]) {
						answer = 1;
						break;
					}
				}
			}
		}
		ans.push_back(answer);
	}
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}
}