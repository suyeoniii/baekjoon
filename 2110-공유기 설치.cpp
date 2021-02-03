#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> v;

long long calc(long long mid){ //공유기 개수
    long long start = v[0];
    long long num = 1;
    for(int i = 0; i<v.size(); i++){
        if(mid<=v[i]-start){
            num += 1;
            start = v[i];
        }
    }
    return num;
}

int main(){
    long long N, C;
    scanf("%lld", &N);
    scanf("%lld", &C);

    for(int i = 0; i<N; i++){
        long long n;
        scanf("%lld", &n);

        v.push_back(n);
    }

    sort(v.begin(), v.end());

    long long ans = 0;

        long long left = 0, right = v[v.size()-1]-v[0];
        while(left<=right){
            long long mid = (left + right)/2;
            long long c = calc(mid);

            if(c>=C){
                ans = mid;
                left = mid + 1;
            }
            else if(c < C){ //설치할 수 있는 공유기수가 적다 -> 거리=넓다
                right = mid -1;
            }
        }

    printf("%lld", ans);
}
