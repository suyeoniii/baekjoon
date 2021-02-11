#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <cstdio>
#include <deque>

using namespace std;

int main() {
    int N, K;
    cin>>N>>K;
    string s;
    cin>>s;
    stack<int> st;
    int d = 0;

    st.push(s[0]-'0');

    int limit = 0;
    for(int i = 1; i<N; i++){
        while(limit<K){
            if(!st.empty()&&st.top()<s[i]-'0'){
                d = st.top();
                st.pop();
                limit++;
            }
            else{
                break;
            }
        }
        d = s[i]-'0';
        st.push(s[i]-'0');
        d = st.size();
    }

    string ans = "";

    while(!st.empty()){
        ans += st.top() + '0';
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    for(int i = 0; i<N-K; i++){
        cout<<ans[i];
    }
}
