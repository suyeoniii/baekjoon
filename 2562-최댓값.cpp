#include <iostream>
using namespace std;

//9개 수 중에서 최댓값과 최댓값의 위치 출력
int main() {
	int ans = 0;
	int index = 0;
	for (int i = 0; i < 9; i++) {
		int a;
		cin >> a;
		if (ans < a) {
			ans = a;
			index = i+1;
		}
	}
	cout << ans << endl;
	cout << index;

}