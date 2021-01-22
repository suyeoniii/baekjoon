#include <iostream>

using namespace std;

long long arr[41];
long long dp[41] = {0,};

int main(){
    int N,M;
    cin>>N>>M;

    for(int i = 0; i<M; i++){
        long long n;
        cin>>n;

        arr[i] = n;
    }

    dp[0] = 1;
    dp[1] = 1;

    for(int i = 2; i<=N; i++){
        for(int j = 0; j<M; j++){
            if(i==arr[j]){  //고정석이면
                dp[i] = dp[i-1];
                break;
            }
            else if((i-1) == arr[j]){
                dp[i] = dp[i-1];
            }
        }
        if(dp[i]==0){
            dp[i] = dp[i-1]+dp[i-2];
        }
    }

    cout<<dp[N];
}
