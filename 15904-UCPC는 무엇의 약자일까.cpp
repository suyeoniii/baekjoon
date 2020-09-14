#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string str;
	int ans;
	int point = 0;
	int big[5] = { 'U','C','P','C' };
	int small[5] = { 'u','c','p','c' };
	vector<char> v;

	getline(cin, str);

	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			v.push_back(str[i]);
		}
	}

	for (int i = 0; i < v.size(); i++) {
		if (v[i] == big[point]) {
			point += 1;
		}
		else if (v[i] == small[point]) {
			point += 1;
		}
		if (point == 4) {
			break;
		}
	}
	if (point == 4) {
		cout << "I love UCPC";
	}
	else {
		cout << "I hate UCPC";
	}
}