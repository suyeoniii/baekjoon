#include<iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main(){

    int N, P;
    cin>>N>>P;

    stack<int> s1;
    stack<int> s2;
    stack<int> s3;
    stack<int> s4;
    stack<int> s5;
    stack<int> s6;

    int ans = 0;
    for(int i = 0; i<N; i++){
        int a, b;
        cin>>a>>b;

        if(a == 1){
            while(!s1.empty()&&s1.top()>b){
                s1.pop();
                ans += 1;
            }
            if(s1.empty()||s1.top() != b){
                s1.push(b);
                ans += 1;
            }
        }
        else if(a == 2){
            while(!s2.empty()&&s2.top()>b){
                s2.pop();
                ans += 1;
            }
            if(s2.empty()||s2.top() != b){
                s2.push(b);
                ans += 1;
            }
        }
        else if(a == 3){
            while(!s3.empty()&&s3.top()>b){
                s3.pop();
                ans += 1;
            }
            if(s3.empty()||s3.top() != b){
                s3.push(b);
                ans += 1;
            }
        }
        else if(a == 4){
            while(!s4.empty()&&s4.top()>b){
                s4.pop();
                ans += 1;
            }
            if(s4.empty()||s4.top() != b){
                s4.push(b);
                ans += 1;
            }
        }
        else if(a == 5){
            while(!s5.empty()&&s5.top()>b){
                s5.pop();
                ans += 1;
            }
            if(s5.empty()||s5.top() != b){
                s5.push(b);
                ans += 1;
            }
        }
        else if(a == 6){
            while(!s6.empty()&&s6.top()>b){
                s6.pop();
                ans += 1;
            }
            if(s6.empty()||s6.top() != b){
                s6.push(b);
                ans += 1;
            }
        }
    }
    cout<<ans;


}



