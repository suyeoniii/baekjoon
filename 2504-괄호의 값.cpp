#include<iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    string s;
    cin>>s;
    stack<int> st;

    int ans = 0;
    bool ok = true;

    for(int i = 0; i<s.length(); i++) {
        if(s[i] == '('||s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.size()>0){
                if(st.top()=='('){
                    st.pop();
                }
                else{
                    ok = false;
                    break;
                }
            }
            else{
               ok = false;
               break;
            }
        }
        else if(s[i]==']'){
            if(st.size()>0){
                if(st.top()=='['){
                    st.pop();
                }
                else{
                    ok = false;
                    break;
                }
            }
            else{
                ok = false;
                break;
            }
        }
    }

    if(!st.empty()||ok==false){
        ans = 0;
    }
    else{ //ok==true
        for(int i = 0; i<s.length(); i++){
            if(s[i]=='('||s[i]=='['){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if(st.top()=='('){
                    st.pop();
                    st.push(2);
                }
                else{
                    int tmp = 0;
                    while(st.top()!='('){
                        tmp += st.top()*2;
                        st.pop();
                    }
                    st.pop();
                    st.push(tmp);
                }
            }
            else if(s[i]==']'){
                if(st.top()=='['){
                    st.pop();
                    st.push(3);
                }
                else{
                    int tmp = 0;
                    while(st.top()!='['){
                        tmp += st.top()*3;
                        st.pop();
                    }
                    st.pop();
                    st.push(tmp);
                }
            }
        }

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
    }

    cout<<ans;
}



