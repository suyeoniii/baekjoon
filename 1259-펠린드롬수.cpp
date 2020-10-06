#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num = -1;
	vector <int> v;
	while (num != 0) {
		cin >> num;
		v.push_back(num);
	}
	for (int i = 0; i < v.size()-1; i++) {
		int temp = 0;
		for (int j = 1;v[i]/j>0; j*=10) {
			temp *= 10;
			temp += (v[i] % (j * 10)) / j;
		}
		if (v[i] == temp)
			cout << "yes"<<"\n";
		else
			cout << "no" << "\n";
	}
}