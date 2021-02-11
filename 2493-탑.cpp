#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <cstdio>

using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    stack<pair<int, int>> st;

    for(int i = 1; i<=N; i++){
        int n;
        scanf("%d", &n);

        while(!st.empty()){
            if(st.top().first >= n){
                printf("%d ",st.top().second);
                break;
            }
            st.pop();
        }
        if(st.empty()){
            printf("0 ");
        }
        st.push(make_pair(n, i));
    }
}
