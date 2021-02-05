#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> v;
long long N, M;

long long calc(long long mid){
    long long res = 0;
    for(int i = 0; i<v.size(); i++){
        res += mid/v[i];
    }
    return res;
}

int main(){
    scanf("%lld", &N);
    scanf("%lld", &M);

    for(int i = 0; i<N; i++){
        long long t;
        scanf("%lld", &t);

        v.push_back(t);
    }

    sort(v.begin(), v.end());

    long long left = v[0], right = v[v.size()-1]*M;
    long long ans = 0;
    while(left<=right){
        long long mid = (left + right)/2;
        long long c = calc(mid); //개
        if(c>=M){
            ans = mid;
            right = mid -1;

        }else{
            left = mid + 1;
        }
    }

    printf("%lld", ans);

}
