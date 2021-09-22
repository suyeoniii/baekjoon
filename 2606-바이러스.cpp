#include <iostream>
#include <vector>
#include <queue>
#include <string.h>
#include <algorithm>

using namespace std;

vector<int> v[101];
bool visited[101] = {false, };
int answer = 0;
int N, V;

void dfs(int n){

    for(int i = 0; i<v[n].size(); i++){
        int node = v[n][i];
        if(!visited[node]){
            visited[node] = true;
            answer += 1;
            dfs(node);
        }
    }
}

int main(){

    cin>>N>>V;

    for(int i = 0; i<V; i++){
        int s, e;
        cin>>s>>e;

        v[s].push_back(e);
        v[e].push_back(s);
    }

    visited[1] = true;
    dfs(1);
    cout<<answer;

}