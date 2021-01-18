#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    long long dp[102];
    vector<int> v;
    int T;
    long long ma = 0;
    cin>>T;

    for(int i = 0; i<T; i++){
        long long n;
        cin>>n;

        if(n>ma){
            ma = n;
        }
        v.push_back(n);
    }

    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;
    dp[6] = 3;

    for(int i = 7; i<=ma; i++){
        dp[i] = dp[i-1] + dp[i-5];
    }

    for(int i = 0; i<v.size(); i++){
        cout<<dp[v[i]]<<"\n";
    }
}
