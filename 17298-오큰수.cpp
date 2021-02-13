#include <cstdio>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int N;
    scanf("%d",&N);
    vector<int> v;
    stack<int> st;

    for(int i = 0; i<N; i++){
        int n;
        scanf("%d", &n);

        v.push_back(n);
    }

    vector<int> ans(v.size(), -1);

    for(int i = 0; i<v.size(); i++){
        while(!st.empty() && v[st.top()] < v[i]){
            ans[st.top()] = v[i];
            st.pop();
        }
        st.push(i);
    }

    for(int i = 0; i<ans.size(); i++){
        printf("%d ", ans[i]);
    }

    return 0;
}
