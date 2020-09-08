#include <iostream>
using namespace std;

//두수 비교
int main() {
	int A, B;
	cin >> A >> B;

	if (A>B) {
		cout << '>';
	}
	else if (A<B) {
		cout << '<';
	}
	else if(A==B){
		cout << "==";
	}
}