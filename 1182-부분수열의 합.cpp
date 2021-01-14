#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int N, S;
int check[21];
int sum = 0;
int ans = 0;

void go(int cnt, int c, int index){
    if(cnt==c){
        if(sum==S){
            ans += 1;
        }
        return;
    }
    for(int i = index; i<N; i++){
        if(!check[i]){
            check[i] = true;
            sum += v[i];
            go(cnt + 1, c, i);
            sum -= v[i];
            check[i] = false;
        }
    }
}

int main(){
    cin>>N>>S;

    for(int i = 0; i<N; i++){
        int a;
        cin>>a;

        v.push_back(a);
    }

    for(int i = 1; i<=N; i++){
        go(0, i, 0);
    }

    cout<<ans;
}
