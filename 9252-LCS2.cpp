#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    string dp[1001][1001];
    string ans ="";
    cin>>s1>>s2;

    for(int i = 1; i<=s2.length(); i++){
        for(int j = 1; j<=s1.length(); j++){
            if(s2[i-1]==s1[j-1]){
                dp[i][j] = dp[i-1][j-1]+s2[i-1];
                ans += s2[i-1];
            }
            else{
                if(dp[i-1][j].length()>dp[i][j-1].length()) {
                    dp[i][j] = dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i][j-1];
                }
            }
        }
    }
    cout<<dp[s2.size()][s1.size()].length()<<"\n";
    cout<<dp[s2.size()][s1.size()];
}
