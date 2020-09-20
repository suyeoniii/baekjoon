#include <iostream>
#include <vector>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N;
	vector <int> v;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(a + b);
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}