#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int level;
	bool isEnter = false;
	string name;
	vector<vector<pair<string,int>>> v;

	int total;
	int limit;

	cin >> total >> limit;

	for (int k = 0; k < total; k++) {
		isEnter = false;
		cin >> level >> name;

		//만들어진방
		for (int i = 0; i < v.size(); i++) {
			if (v[i][0].second == 1) {
				if (level >= v[i][1].second - 10 && level <= v[i][1].second + 10) {
					v[i].push_back(make_pair(name,level));
					isEnter = true;
					if (v[i].size() == limit + 1) {
						v[i][0].second = 2;
						v[i][0].first = "Started!";
					}
					break;
				}
			}
		}
		//새로운방
		if (isEnter == false) {
			vector<pair<string,int>> temp;
			temp.push_back(make_pair("Waiting",1));
			temp.push_back(make_pair(name,level));
			v.push_back(temp);
		}
	}
	for (int i = 0; i < v.size(); i++) {
		sort(v[i].begin()+1, v[i].end());
		cout << v[i][0].first << "\n";
		for (int j = 1; j < v[i].size(); j++) {
			cout << v[i][j].second << ' ' << v[i][j].first << "\n";
		}
	}

}