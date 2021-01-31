#include <iostream>
#include <map>
#include <utility>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>

using namespace std;
double comb(int n, int r){
    if(r>n/2){
        r = n-r;
    }
    double ans = 1;
    double temp = 1;
    for(int i = 0; i<r; i++){
        ans *= n-i;
        temp *= r-i;
    }
    ans = ans/temp;
    return ans;
}

int main(){
    int N, M, K;
    cin>>N>>M>>K;

    cout<<fixed;
    cout.precision(16);

    double ans = 0.0;
    double p = comb(N,M);
    while(M>=K) { if(N-M < M-K) {
        K++;
        continue;
    }
    double c = comb(M,K) * comb(N-M,M-K);
    ans += c/p;
    K++;
    }

    cout<<ans;

}
