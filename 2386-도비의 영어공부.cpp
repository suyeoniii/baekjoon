#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector <pair<char,string>> v;
	int ans = 0;


	while(1) {
		char a;
		string b;
		cin >> a;
		if (a == '#') {
			break;
		}
		getline(cin, b);
		v.push_back(make_pair(a,b));
	}

	for (int i = 0; i < v.size();i++) {
		ans = 0;
		for (int j = 0; j < v[i].second.size();j++) {
			if (v[i].first == v[i].second[j]) {
				ans += 1;
			}
			else if (v[i].first == v[i].second[j]+32) {
				ans += 1;
			}

		}
		cout << v[i].first <<" "<< ans << endl;
	}
	
}