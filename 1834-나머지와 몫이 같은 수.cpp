#include <iostream>

using namespace std;

typedef long long ll;

int main(){
    ll N;
    cin>>N;
    ll ans = 0;

    for(int i = 1; i<N; i++){
        ans+=i*N+i;

    }
    cout<<ans;
}
