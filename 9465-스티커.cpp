#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main(){
    int T;
    cin>>T;

    for(int i = 0; i<T; i++){
        int dp[3][100001];
        int arr[3][100001];

        int N;
        cin>>N;
        for(int k = 0; k<2; k++){
            for (int j = 0; j <N; j++) {
                int a;
                cin>>a;

                arr[k][j] = a;
            }
        }

        dp[0][0] = arr[0][0];
        dp[1][0] = arr[1][0];

        if(N>=2) {
            dp[0][1] = arr[1][0] + arr[0][1];
            dp[1][1] = arr[0][0] + arr[1][1];


            for (int j = 2; j < N; j++) {
                dp[0][j] = max(max(dp[0][j - 2], dp[1][j - 1]), dp[1][j - 2]) + arr[0][j];
                dp[1][j] = max(max(dp[1][j - 2], dp[0][j - 1]), dp[0][j - 2]) + arr[1][j];
            }
        }

        cout<<max(dp[0][N-1], dp[1][N-1])<<"\n";


    }
}
