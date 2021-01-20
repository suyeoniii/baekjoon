#include <iostream>
#include <vector>

using namespace std;

int memo[110][110][110];

int main() {

    int dp[501][501];
    vector<vector<int>> v;
    int n;
    cin>>n;

    //입력
    for(int i = 1; i<=n; i++){
        vector<int> v2;
        for(int j = i; j>0; j--){
            int a;
            cin>>a;

            v2.push_back(a);
        }
        v.push_back(v2);
    }

    dp[0][0] = v[0][0]; //꼭대기 값 

    for(int i = 1; i<v.size(); i++){
        for(int j = 0; j<v[i].size(); j++){
            //왼쪽 변 
            if(j==0){
                dp[i][j] = dp[i-1][0] + v[i][j];
            }
            //오른쪽 변 
            else if(j==v[i].size()-1){
                dp[i][j] = dp[i-1][j-1] + v[i][j];
            }
            //삼각형 내부  
            else{
                dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + v[i][j];
            }
        }
    }

    int ans = 0;
    for(int i = 0; i<n; i++){
        if(dp[n-1][i]>ans){
            ans = dp[n-1][i];
        }
    }

    cout<<ans;

}
