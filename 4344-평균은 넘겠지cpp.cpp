#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int C;
	vector <vector<int>> v2;
	vector<double> ans;
	cin >> C;

	for (int i = 0; i < C; i++) {
		int N;
		cin >> N;
		vector<int> v;
		for (int j = 0; j < N; j++) {
			int a;
			cin >> a;
			v.push_back(a);
		}
		v2.push_back(v);
	}

	for (int i = 0; i < v2.size(); i++) {
		int ave = 0;
		double answer = 0;
		for (int j = 0; j < v2[i].size(); j++) {
			ave += v2[i][j];
		}
		ave /= v2[i].size();
		for (int j = 0; j < v2[i].size(); j++) {
			if (v2[i][j] > ave) {
				answer += 1;
			}
		}
		answer = answer*100 / v2[i].size();
		ans.push_back(answer);
	}
	
	for (int i = 0; i < ans.size(); i++) {
		printf("%.3f%%\n", ans[i]);
	}
}