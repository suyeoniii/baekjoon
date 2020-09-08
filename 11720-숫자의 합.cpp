#include <iostream>
#include <string>
using namespace std;
//입력받은 수의 각자리수 합 출력

int main() {
	int N;
	string s;
	int ans = 0;
	cin >> N;
	cin >> s;

	for (int i = 0; i < N; i++) {
		ans += s[i] - 48;
	}
	cout << ans;
}