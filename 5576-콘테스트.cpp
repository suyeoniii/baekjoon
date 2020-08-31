#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector <int> v1;
	vector <int> v2;
	int ans = 0;
	int max = 0;
	
	for (int i = 0; i < 10; i++) {
		int a;
		cin >> a;
		v1.push_back(a);
	}
	for (int i = 0; i < 10; i++) {
		int a;
		cin >> a;
		v2.push_back(a);
	}

	sort(v1.rbegin(), v1.rend());
	sort(v2.rbegin(),v2.rend());

		
		cout << v1[0] + v1[1] + v1[2] << " ";
		cout << v2[0] + v2[1] + v2[2];
		

	
}