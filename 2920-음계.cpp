#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
  1 2 3 4 5 6 7 8 = ascending
  8 7 6 5 4 3 2 1 = descending
  ±× ¿Ü - mixed
*/
int main() {
	vector<int> v;
	string ans;

	for (int i = 0; i < 8; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	if (v[0] != 1 && v[0] != 8) {
		ans = "mixed";
	}
		
	else if(v[0]==1){
		ans = "ascending";
		for (int i = 0; i < v.size(); i++) {
			if (v[i] != i+1){
				ans = "mixed";
			}
		}
	}
	else if (v[0] == 8) {
		ans = "descending";
		for (int i = 0; i < v.size(); i++) {
			if (v[i] != 8-i) {
				ans = "mixed";
			}
		}
	}
	cout << ans;
}