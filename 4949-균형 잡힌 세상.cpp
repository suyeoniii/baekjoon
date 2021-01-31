#include <iostream>
#include <map>
#include <utility>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main(){
    string str = "";
    vector<string> v;
    while(!(str[0] == '.' && str.length()==1)){
        getline(cin, str);
        stack<char> s;

        string ans = "yes";
        for(int j = 0; j<str.length(); j++){
            if(str[j]=='('||str[j]=='['){
                s.push(str[j]);
            }
            else if(str[j]==')'){
                if(!s.empty() && s.top()=='('){
                    s.pop();
                }
                else{
                    ans = "no";
                    break;
                }
            }
            else if(str[j]==']'){
                if(!s.empty() && s.top()=='['){
                    s.pop();
                }
                else{
                    ans = "no";
                    break;
                }
            }
        }
        if(ans == "yes" && !s.empty()){
            ans = "no";
        }
        v.push_back(ans);
    }
    for(int i = 0; i<v.size()-1; i++){
        cout<<v[i]<<"\n";
    }
}
