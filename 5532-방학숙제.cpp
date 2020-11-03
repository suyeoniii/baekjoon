#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int L, A, B, C, D;
	cin >> L >> A >> B >> C >> D;

	if (A % C!=0) {
		C = A / C + 1;
	}
	else {
		C = A / C;
	}

	if (B % D != 0) {
		D = B / D + 1;
	}
	else {
		D = B / D;
	}

	cout << L - max(C, D);

}