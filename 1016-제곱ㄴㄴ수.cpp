#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {
	int i = 2;
	int a, b;

	cin >> a >> b;

	int ans = b - a + 1;

	vector <int> prime; //소수 배열
	vector <int> square;
	bool isPrime = true; //소수판별

	prime.push_back(2); //소수 배열에 2추가 하고 시작
	square.push_back(4);

	//입력받은 최댓값까지의 소수 배열 만들기
	for (int i = 3; i <= sqrt(b); i++) { //입력 값의 마지막 원소(최댓값)까지 반복
		isPrime = true;
		for (int j = 0; j < prime.size(); j++) { //소수 배열 크기 만큼 반복

			if (i >= prime[j] && i % prime[j] == 0) { //소수 배열 수보다 크면서 나누어 떨어지면 소수 아님
				isPrime = false;
				break;
			}
		}
		if (isPrime == true) { //위쪽 if문을 모두 통과 시 소수임
			prime.push_back(i); //소수 배열에 추가
			square.push_back(pow(i, 2));
		}
	}
	
	for (i = a; i <= b; i++) {
		for (int j = 0; j < square.size(); j++) {
			if (square[j] <= i) {
				if (i % square[j] == 0) {
					ans -= 1;
					break;
				}
			}
			else {
				break;
			}
		}
	}
	cout << ans;
}