/*
	문제 : k-1,k,k+1만큼 속도를 바꿔가며 도착지 까지 갈려고 할 때 최소한의 이동 수
	*첫속도와 마지막 속도는 항상 1임
	ex) 출발 : 1 , 도착 : 5
	속도 = 1, 2, 1
	답 = 3

	예시)

	입력 : 
	3 (테스트 케이스 수)
	0 3 (출발,도착지)
	1 5
	45 50

	출력 : (이동 수)
	3
	3
	4

	-updated 2020.08.22 suyeoniii
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, ans, length, k; //테스트 케이스 수, 답, 남은 길이, 이동 길이
	bool even; //k를 더하는 횟수의 짝/홀 수 판별

	vector <int> v;
	
	cin >> N;

	for (int i = 0; i < N; i++) { //입력
		int a, b;
		cin >> a;
		cin >> b;
		v.push_back(b - a); //거리로 저장
	}

	for (int i = 0; i < N; i++) {

		ans = 0;
		length = v[i]; //남은 길이 = 거리
		even = false; //초기값 = 홀수번
		k = 1; 

			while (length > 0) { //길이가 0보다 큰 동안 진행
				length -= k; //k만큼 길이를 빼주고 답++
				ans += 1;

				if (even) { //k를 두번 더했으면, 1늘려줌
					k = k + 1;
					even = false;
				}
				else { //k 한번 더했음
					even = true;
				}
			}
		cout << ans << endl;
	}
}

