#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

typedef long long ll;

int main(){
    ll N, M;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    scanf("%lld", &N);
    scanf("%lld", &M);

    for (int i = 0; i < N; ++i) {
        ll n;
        scanf("%lld", &n);
        pq.push(n);
    }

    for(int i = 0; i<M; i++){
        ll a = pq.top();
        pq.pop();
        ll b = pq.top();
        pq.pop();

        pq.push(a+b);
        pq.push(a+b);
    }

    ll ans = 0;
    while(!pq.empty()){
        ans += pq.top();
        pq.pop();
    }
    printf("%lld", ans);

}
