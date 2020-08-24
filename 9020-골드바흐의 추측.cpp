#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;//테스트케이스
	vector <int> v; //입력 값
	vector <int> prime; //소수 배열
	vector <pair<int, int>> ans; //출력 값(소수 개수)
	int num = 0; //기준값 - 주어진 짝수의 반
	int a = 0; //기준값보다 작은 소수
	int b = 0; //기준값보다 큰 소수
	bool isPrime = true; //소수판별

	cin >> N; //테스트케이스 입력

	for (int i = 0; i < N; i++) { //입력
		int a, b;
		cin >> a;
		v.push_back(a);
	}

	prime.push_back(2); //소수 배열에 2추가 하고 시작

	//입력받은 최댓값까지의 소수 배열 만들기
	for (int i = 3; i <= *max_element(v.begin(), v.end()); i++) { //입력 값의 마지막 원소(최댓값)까지 반복
		isPrime = true;
		for (int j = 0; j < prime.size(); j++) { //소수 배열 크기 만큼 반복

			if (i >= prime[j] && i % prime[j] == 0) { //소수 배열 수보다 크면서 나누어 떨어지면 소수 아님
				isPrime = false;
				break;
			}
		}
		if (isPrime == true) { //위쪽 if문을 모두 통과 시 소수임
			prime.push_back(i); //소수 배열에 추가
		}
	}

	//두 소수 찾기
	for (int i = 0; i < v.size(); i++) {
		num = v[i] / 2; //기준값
		for (int j = 0; j < prime.size(); j++) {
			if (num >= prime[j]) { //기준값보다 작은 소수 찾기
				a = j;
			}
			if (num <= prime[j]) { //기준값보다 큰 소수 찾기
				b = j;
				break;
			}
		}

		//두 소수의 합이 주어진 수가 될 때까지 a, b 값 조정
		while (a >= 0 && a < prime.size() && b >= 0 && b < prime.size()) {
			if (prime[a] + prime[b] == v[i]) {//답 찾았을 때
				ans.push_back(make_pair(prime[a], prime[b]));
				break;
			}
			else if (prime[a] + prime[b] >= v[i]) {//주어진 수보다 크면 작은 값을 줄임
				a -= 1;
			}
			else if (prime[a] + prime[b] <= v[i]) { //주어진 수보다 작으면 큰값을 늘림
				b += 1;
			}
		}
	}

	for (int i = 0; i < ans.size(); i++) { //답 출력
		cout << ans[i].first << ' ' << ans[i].second << endl;;
	}
}