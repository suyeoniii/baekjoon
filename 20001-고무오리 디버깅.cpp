#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int pro = 0;

	string s;
	getline(cin, s);

	vector<string> problem;

	while (s!="고무오리 디버깅 끝") {
		getline(cin, s);
		problem.push_back(s);
	}
	problem.pop_back();

	for (int i = 0; i < problem.size(); i++) {
		if (problem[i] == "문제") {
			pro++;
		}
		else if (problem[i] == "고무오리") {
			if (pro > 0) {
				pro--;
			}
			else {
				pro += 2;
			}
		}
	}
	if (pro > 0) {
		cout << "힝구";
	}
	else {
		cout << "고무오리야 사랑해";
	}
}