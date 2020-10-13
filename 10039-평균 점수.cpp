#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	int a, b, c, d, e;
	int ave = 0;
	vector<int> v;

	for (int i = 0; i < 5; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	for (int i = 0; i < v.size(); i++) {
		if (v[i] < 40) {
			ave += 40;
		}
		else
			ave += v[i];
	} 
	cout << ave / 5;
}