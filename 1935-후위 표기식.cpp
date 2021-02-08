#include<iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main(){

    cout << fixed;
    cout.precision(2);

    int N;
    string s;
    vector<double> v;
    stack<double> st;

    cin>>N>>s;

    for(int i = 0; i<N; i++){
        double n;
        cin>>n;

        v.push_back(n);
    }

    for(int i = 0; i<s.length(); i++){
        if(s[i]=='*'){
            double a = st.top();
            st.pop();
            double b = st.top();
            st.pop();

            st.push(a*b);
        }
        else if(s[i]=='+'){
            double a = st.top();
            st.pop();
            double b = st.top();
            st.pop();

            st.push(b+a);
        }
        else if(s[i]=='-'){
            double a = st.top();
            st.pop();
            double b = st.top();
            st.pop();

            st.push(b-a);
        }
        else if(s[i]=='/'){
            double a = st.top();
            st.pop();
            double b = st.top();
            st.pop();

            st.push(b/a);
        }
        else{
            st.push(v[s[i]-'A']);
        }
    }
    cout<<st.top();
}



