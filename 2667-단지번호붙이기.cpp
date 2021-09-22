#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<string> v;
bool visited[26][26] = {false, };
queue<pair<int, int>> q;

int N;
int dx[4] = {0, 0, -1, 1}; //상하좌우
int dy[4] = {-1, 1, 0, 0};

int bfs(int y, int x){
    int ans = 0;
    q.push(make_pair(y, x));
    visited[y][x] = true;

    while(!q.empty()){
        int nodeY = q.front().first;
        int nodeX = q.front().second;
        q.pop();

        for(int i = 0; i<4; i++){

            int ty = nodeY+dy[i];
            int tx = nodeX+dx[i];

            if(ty >= N || tx >= N || ty < 0 || tx < 0) continue;

            if(v[ty][tx]=='1' && !visited[ty][tx]){
                ans++;
                visited[ty][tx] = true;
                q.push(make_pair(ty, tx));
            }
        }
    }
    return ans+1;
}

int main(){
    cin>>N;

    for(int i = 0; i<N; i++){
        vector<int> v1;
        string s;
        cin>>s;
        v.push_back(s);
    }

    vector<int> answer;
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            if(v[i][j]=='1' && !visited[i][j]){
                answer.push_back(bfs(i, j));
            }
        }
    }

    sort(answer.begin(), answer.end());

    cout<<answer.size()<<"\n";
    for(int i = 0; i<answer.size(); i++){
        cout<<answer[i]<<"\n";
    }

}