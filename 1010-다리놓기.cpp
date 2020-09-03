#include <iostream>
#include <vector>
#include <algorithm>

/*
DP알고리즘 사용
mCn을 하면 답 구할 수 있음.
m>=n
*/

using namespace std;
int arr[32][32] = { 0, }; //전역 배열 - 기록

void dp(int a,int b) { //dp수행
	int b2 = b-1; 
	
		while (b2 != b) { //원하는 값이 기록되면 종료
			if (arr[a][b2] == 0) { //기록된게 없으면 있을 때까지 뒤로 이동
				b2 -= 1;
			}
			else if (arr[a][b2] != 0) { //기록된게 있으면 앞으로 이동하며 이전값을 이용하여 기록
				b2 += 1;
				arr[a][b2] = arr[a][b2 - 1] * b2 / (b2 - a);
			}
		}
}

int main() {
	int T, N, M; //테스트케이스
	vector <pair<int, int>> v; //입력 받는 배열
	vector <int> answer; //출력할 배열
	int ans = 0;

	cin >> T;
	
	for (int i = 0; i < T; i++) {//입력
		cin >> N >> M;
		v.push_back(make_pair(N, M));
	}
	for (int i = 0; i < 31 ; i++) {//n==m인경우 1기록
		arr[i][i] = 1;
	}
	for (int i = 0; i < T; i++) {//테스트케이스 반복
		if (arr[v[i].first][v[i].second]!=0) { //값이 있으면 출력
			answer.push_back(arr[v[i].first][v[i].second]);
		}
		else { //값이 0이면(없으면) 구하기
			dp(v[i].first, v[i].second);
			answer.push_back(arr[v[i].first][v[i].second]);
		}
	}

	for (int i = 0; i < answer.size(); i++) { //답 출력
		cout << answer[i] << endl;
	}
}