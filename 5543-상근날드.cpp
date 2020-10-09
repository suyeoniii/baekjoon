#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a, b, c, coke, soda;
	cin >> a >> b >> c >> coke >> soda;
	
	int min_b, min_d;
	min_b = min(a, b);
	min_b = min(min_b, c);
	min_d = min(coke, soda);

	cout << min_b + min_d - 50;
}