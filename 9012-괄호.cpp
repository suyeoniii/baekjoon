#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int N;
	int bracket = 0;
	int right = 0;
	vector<string> v;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		v.push_back(s);
	}
	for (int i = 0; i < v.size(); i++) {
		bracket = 0;
		for (int j = 0; j < v[i].length(); j++) {
			if (v[i][j] == '(') {
				bracket += 1;
			}
			else if (v[i][j] == ')') {
				bracket -= 1;
				if (bracket < 0) {
					break;
				}
			}
		}
		if (bracket == 0) {
			cout << "YES"<<"\n";
		}
		else {
			cout << "NO" << "\n";
		}
	}
}