#include <iostream>
#include <string>
#include <vector>
#include<cmath>

using namespace std;
typedef long long ll;

vector<string> v;
bool visited[1001][1001] = { 0, }; // y x
int dx[] = {0, 0, -1, 1}; //상하좌우
int dy[] = {1, -1, 0, 0};
int N, M;
int cnt = 0;

void dfs(int x, int y, char c)
{
    visited[y][x] = true;
    cnt += 1;

    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >= M || nx < 0 || nx >= N) continue;

        if (!visited[ny][nx] && v[ny][nx]==c)
        {
            dfs(nx, ny, c);
        }
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int w = 0;
    int b = 0;

    cin>>N>>M;
    for(int i = 0; i<M; i++){
        string s;
        cin>>s;
        v.push_back(s);
    }

    for(int i = 0; i<M; i++){
        for(int j = 0; j<N; j++){
            cnt = 0;
            if(!visited[i][j] && v[i][j]=='W'){
                dfs(j, i, 'W');
                w += pow(cnt, 2);
            }
            else if(!visited[i][j] && v[i][j]=='B'){
                dfs(j, i, 'B');
                b += pow(cnt, 2);
            }
        }
    }

    cout<<w<<" "<<b;

    return 0;
}
