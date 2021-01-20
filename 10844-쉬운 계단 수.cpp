#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    long long dp[11][101];
    long long n;
    cin>>n;

    for(int i = 0; i<10; i++) {
        dp[i][1] = 1;
    }

    for(int i = 2; i<=n; i++){
        for(int j = 0; j<10; j++){
            if(j==0){
                dp[j][i] = dp[j + 1][i - 1]%1000000000;
            }
            else if(j==9) {
                dp[j][i] = dp[j - 1][i - 1]%1000000000;
            }
            else{
                dp[j][i] = (dp[j - 1][i - 1]%1000000000 + dp[j + 1][i - 1]%1000000000)%1000000000;
            }
        }
    }

    long long ans = 0;
    for(int i = 1; i<10; i++) {
        ans += dp[i][n]%1000000000;;
    }

    cout<<ans%1000000000;

}
