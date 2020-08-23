#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	vector <int> v; //입력 값
	vector <int> prime; //소수 배열
	int ans = 0; //출력 값(소수 개수)
	bool isPrime = true; //소수판별

	cin >> N; //테스트케이스 입력

	for (int i = 0; i < N; i++) { //입력
		int a, b;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end()); //정렬

	prime.push_back(2); //소수 배열에 2추가 하고 시작

	//입력받은 최댓값까지의 소수 배열 만들기
	for (int i = 3; i <= v[v.size()-1]; i++) { //입력 값의 마지막 원소(최댓값)까지 반복
		isPrime = true;
		for (int j = 0; j < prime.size(); j++) { //소수 배열 크기 만큼 반복

			if (i>=prime[j]&&i % prime[j] == 0) { //소수 배열 수보다 크면서 나누어 떨어지면 소수 아님
				isPrime = false;
				break;
			}
		}
		if (isPrime == true) { //위쪽 if문을 모두 통과 시 소수임
			prime.push_back(i); //소수 배열에 추가
		}
	}

	//위에서 만든 소수 배열과 입력 값 비교해서 소수 판별
	for (int i = 0; i < v.size(); i++) {
		for(int j = 0;j<prime.size();j++)
			if (v[i] == prime[j]) {
				ans += 1;
				break;
			}
	}
	cout << ans; //입력값 중 소수 개수 출력
}