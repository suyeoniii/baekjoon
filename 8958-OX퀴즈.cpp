#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, answer;
	int num = 1;
	vector<int> ans;
	vector<string> v;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string a;
		cin >> a;
		v.push_back(a);
	}
	for (int i = 0; i < v.size(); i++) {
		num = 1;
		answer = 0;
		for (int j = 0; j < v[i].length(); j++) {
			if (v[i][j] == 'O') {
				answer += num;
				num += 1;
			}
			else if (v[i][j] == 'X') {
				num = 1;
			}
		}
		ans.push_back(answer);
	}
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << "\n";
	}
}