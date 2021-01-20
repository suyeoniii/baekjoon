#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int memo[110][110][110];

int main() {

    int n;
    vector<pair<int, int>> v;
    int dp[1000];
    cin>>n;

    for(int i = 0; i<n; i++){
        int a, b;
        cin>>a>>b;

        v.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end());

    for(int i = 0; i<v.size(); i++){
        dp[i] = 1;
        for(int j = 0; j<=i; j++){
            if(v[i].second>v[j].second){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }

    int ans = 0;
    for(int i = 0; i<v.size(); i++){
        if(dp[i]>ans){
            ans = dp[i];
        }
        //cout<<dp[i]<<" ";
    }
    ans = n-ans;
    cout<< ans;

}
