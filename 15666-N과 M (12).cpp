#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> v;
vector<int> input;

void go(int cnt, int num){
    if(cnt==M){
        for(int i = 0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    int before = -1;
    for(int i = num; i<N; i++){
        if(before!=input[i]){
            before=input[i];
            v.push_back(input[i]);
            go(cnt+1, i);
            v.pop_back();
        }
    }
}

int main(){
    cin>>N>>M;

    for(int i = 0; i<N; i++){
        int n;
        cin>>n;

        input.push_back(n);
    }

    sort(input.begin(), input.end());
    go(0, 0);
}
