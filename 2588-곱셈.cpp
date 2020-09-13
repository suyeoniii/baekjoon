#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a, b;
	int num = 0;
	cin >> a >> b;

	for (int i = 10; i < b*10; i=i*10) {
		num = (b % i)/(i/10);
		cout << a * num << endl;
	}

	cout << a * b;

}