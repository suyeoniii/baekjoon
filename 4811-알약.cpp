#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    long long dp[31][31];

    for(int i = 0; i<31; i++){
        dp[0][i] = 1;
    }

    for(int w = 1; w<31; w++){
        for(int h = 0; h<31; h++){
            if(h==0){
                dp[w][h] = dp[w-1][1];
            }
            else{
                dp[w][h] = dp[w-1][h+1] + dp[w][h-1];
            }
        }
    }

    while(1){
        int n;
        cin>>n;

        if(n==0){
            break;
        }
        cout<<dp[n-1][1]<<"\n";
    }
}
