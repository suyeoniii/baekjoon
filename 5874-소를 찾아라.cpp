#include <iostream>
#include <map>
#include <utility>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main(){
    string s;
    cin>>s;

    int count = 0;
    int ans = 0;
    for(int i = 1; i<s.length(); i++){
        if(s[i-1]=='(' && s[i]=='('){
            count += 1;
        }
        else if(s[i-1]==')' && s[i]==')'){
            ans += count;
        }
    }
    cout<<ans;
}
