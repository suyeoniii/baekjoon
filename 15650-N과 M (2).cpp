#include <iostream>
#include <vector>
using namespace std;

int N, M;
int check[10] = {0, };
vector<int> v;

void go(int cnt, int num){
    if(cnt==M){
        for(int i = 0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i = num+1; i<=N; i++){
        if(!check[i]){
            v.push_back(i);
            check[i] = 1;
            go(cnt+1, i);
            check[i] = 0;
            v.pop_back();
        }
    }
}

int main(){
    cin>>N>>M;

    go(0, 0);
}
