#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*주어진 수를 통해 어떤 수의 약수인지 알아내는 문제
 정렬했을때 가장작은 값과 큰값을 곱한 값이 답
*/

int main() {
	int N;
	cin >> N;
	vector <int> v;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	cout << v[0] * v[N - 1];
}