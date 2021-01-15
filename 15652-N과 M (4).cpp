#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> v;

void go(int cnt, int num){
    if(cnt==M){
        for(int i = 0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i = num; i<=N; i++){
            v.push_back(i);
            go(cnt+1, i);
            v.pop_back();
    }
}

int main(){
    cin>>N>>M;

    go(0, 1);
}
