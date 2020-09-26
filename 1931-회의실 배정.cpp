#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	int N = 0; //회의 개수
	int a, b;
	int ans = 1;
	int time;
	cin >> N; //입력

	vector<pair<int, int>>v; //순서쌍 벡터선언

	for (int i = 0; i < N; i++) { //회의 시간 입력
		cin >> a >> b;
		v.push_back(pair<int, int>(b, a)); //종료시간으로 정렬하기 위해 (종료시간, 시작시간)으로 할당
	}
	sort(v.begin(), v.end());//오름차순 정렬
	time = v[0].first;

	for (int i = 1; i < N; i++) {
		if (time <= v[i].second) {
			time = v[i].first;
			ans += 1;
		}
	}
	cout << ans;

}