#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int N;
	vector<string> s;
	string str;
	cin >> N;
	getline(cin, str);

	for (int i = 0; i < N; i++) {
		getline(cin, str);
		s.push_back(str);
	}

	for (int i = 0; i < s.size(); i++) {
		vector <string> c;
		string item = "";

		for (int j = 0; j < s[i].length(); j++) {
			if (s[i][j] != ' ') {
				item += s[i][j];
			}
			else if(s[i][j] == ' '){
				c.push_back(item);
				item = "";
			}
			if(j==s[i].length()-1) {
				c.push_back(item);
				break;
			}
		}
		cout << "Case #" << i + 1 << ":";
		for (int j = c.size()-1; j >= 0; j--) {
			cout << ' ';
			cout << c[j];
		}
		cout << "\n";
	}
}