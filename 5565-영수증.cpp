#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	int price;
	cin >> price;

	for (int i = 0; i < 9; i++) {
		int a;
		cin >> a;
		price -= a;
	}
	cout << price;
}