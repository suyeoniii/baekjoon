#include <iostream>
#include <math.h>
using namespace std;

//나눗셈 시 소수점까지 출력함

int main() {
	int A, B;
	int ans = 0;
	cin >> A >> B;

	cout << fixed;
	cout.precision(20);

	cout.unsetf(ios::fixed);
	cout << A / (double)B;
}