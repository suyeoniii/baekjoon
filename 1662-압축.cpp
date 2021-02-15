#include <vector>
#include <stack>
#include <string>
#include <iostream>

using namespace std;

const int MAX = 50;

string s;
int visited[MAX];

int func(int start, int end) {
    int result = 0;

    for(int i = start; i<end; i++){
        if(s[i] == '('){
            int K = s[i-1] - '0';

            result += K * func(i+1, visited[i])-1;
            i = visited[i];

            continue;
        }

        result++;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>s;

    stack<int> st;

    for(int i = 0; i<s.length(); i++){
        if(s[i] == '('){
            st.push(i);
        }
        else if(s[i]==')'){
            visited[st.top()] = i;

            st.pop();
        }
    }

    cout<<func(0, s.length())<<"\n";

    return 0;
}
