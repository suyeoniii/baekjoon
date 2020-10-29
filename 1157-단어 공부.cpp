#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s;
	cin >> s;
	int num = 0;
	int max = 0;
	int letter;
	char ans;

	vector<int> v;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 97) {
			v.push_back(s[i]-32);
		}
		else {
			v.push_back(s[i]);
		}
	}
	sort(v.begin(), v.end());
	letter = v[0];

	for (int i = 0; i < v.size(); i++) {
		if (letter == v[i]) {
			num += 1;
		}
		else {
			if (max < num) {
				max = num;
				ans = v[i - 1];
			}
		}
	}
}