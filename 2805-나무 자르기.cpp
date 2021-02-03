#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> v;

long long calc(int num){
    long long ans = 0;
    for(int i = 0; i<v.size(); i++){
        if(v[i]>num){
            ans += v[i]-num;
        }
    }
    return ans;
}

int main(){
    long long N, M;
    scanf("%lld", &N);
    scanf("%lld", &M);

    for (int i = 0; i < N; ++i) {
        long long n;
        scanf("%lld", &n);

        v.push_back(n);
    }

    sort(v.begin(), v.end());

    long long left = 0, right = v[v.size()-1];
    long long ans = 0;
    while(left<=right){
        long long mid = (left + right)/2;
        long long c = calc(mid);
        if(c>=M){
            if(ans < mid){
                ans = mid;
            }
            left = mid + 1;
        }
        else{ //c<M
            right = mid -1;
        }
    }

    printf("%lld", ans);
}
