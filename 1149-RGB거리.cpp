#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int N;
    cin>>N;
    int dp[1001][1001];
    int arr[1001][1001];

    for(int i = 0; i<N; i++){
        for(int j = 0; j<3; j++){
            int a;
            cin>>a;

            arr[i][j] = a;
        }
    }

    for(int i = 0; i<3; i++){
        dp[0][i] = arr[0][i];
    }

    for(int i = 1; i<N; i++){
        for(int j = 0; j<3; j++){
            if(j==0){
                dp[i][j] = arr[i][j] + min(dp[i-1][1], dp[i-1][2]);
            }
            else if(j==1){
                dp[i][j] = arr[i][j] + min(dp[i-1][0], dp[i-1][2]);
            }
            else{
                dp[i][j] = arr[i][j] + min(dp[i-1][0], dp[i-1][1]);
            }
        }
    }

    int ans = dp[N-1][0];
    for(int i = 1; i<3; i++) {
        if(ans>dp[N-1][i]){
            ans = dp[N-1][i];
        }
    }

    cout<<ans;
    
}
