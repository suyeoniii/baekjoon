#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> v;
long long N, M;

int main(){
    scanf("%lld", &N);
    scanf("%lld", &M);

    long long MAX = 0;
    long long left = 0;
    for(int i = 0; i<N; i++){
        long long n;
        scanf("%lld", &n);

        v.push_back(n);
        MAX += n;
        left = max(left, v[i]);
    }

    long long ans = 1000000000;
    long long right = MAX;

    while(left<=right) {
        long long cnt = 0, tempSum = 0;
        long long mid = (left + right) / 2;

        for (int i = 0; i < N; i++) {
            if (tempSum + v[i] > mid) {
                tempSum = 0;
                cnt += 1; // 블루레이 갯수 1 증가
            }
            tempSum += v[i];
        }
        if (tempSum != 0) cnt += 1;

        if (cnt <= M) {
            ans = min(ans, mid);
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    printf("%lld", ans);
}
