#include <iostream>
#include <cstring>
using namespace std;

int n, m, v;

int a[51][51] = {0,};
int visited[51][51] = { 0, };
int dy[4]={1,-1,0,0};
int dx[4]={0,0,1,-1};

void dfs(int x, int y)
{
    visited[x][y] = 1;

    for(int k = 0; k < 4; k++){
        int ny = y + dy[k];
        int nx = x + dx[k];

        if(ny < 0 || ny >= n || nx < 0 || nx >= m)
            continue;

        if(!visited[nx][ny] && a[nx][ny])
            dfs(nx, ny);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    int ltemp, rtemp;
    int T;
    cin>>T;
    for(int k = 0; k<T; k++) {
        int ans = 0;
        cin >> m >> n >> v;
        memset(a, 0, sizeof(a));
        memset(visited, 0, sizeof(visited));

        for(int i=0;i<v;i++){
            cin >> ltemp >> rtemp;
            a[ltemp][rtemp] = 1;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!visited[j][i] && a[j][i]){
                    dfs(j, i);
                    ans += 1;
                }
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}
