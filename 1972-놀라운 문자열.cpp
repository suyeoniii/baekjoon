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
    while(str!="*"){
        cin>>str;

        string ans = "";
        for(int i = 1; i<str.length(); i++){
            map<string, int> m;
            for(int j = 0; j<str.length()-i; j++){
                string s = "";
                s += str[j];
                s += str[j+i];
                m[s] += 1;
            }
            for(auto iter = m.begin(); iter != m.end(); iter ++){
                if(iter -> second != 1){
                    ans = "NOT ";
                    break;
                }
            }
            if(ans == "NOT"){
                break;
            }
        }
        if(str != "*"){
            cout<<str<<" is "<<ans<<"surprising."<<"\n";
        }
    }
}
