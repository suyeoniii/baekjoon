#include <iostream>
#include <queue>

using namespace std;

int N;
int arr[1001][1001] = {0};  //연결여부
bool d_check[1001]; //깊이우선 탐색여부
bool b_check[1001]; //너비우선 탐색여부
queue<int> q;//큐

//깊이우선탐색
void dfs(int x){
    d_check[x] = true; //탐색함

    cout<<x<<" ";

    for (int i = 0; i <= N; i++){
        if (arr[x][i] == 1 && d_check[i] == false){ //연결되어있고 다음노드는 탐색전이면 재귀실
            dfs(i);
        }
    }
}

//너비우선탐색
void bfs(int n)
{
    q.push(n);
    b_check[n] = true; //탐색함

    while(q.size()!=0)
    {
        int x = q.front();
        q.pop();
        cout<<x<<" "; //큐의 첫번째 노드

        for(int i = 0 ; i<=N; i++)//연결되어있는 노드탐색
        {
            if(arr[x][i]==1&&b_check[i]==false)//연결되어있고,방문하지 않은 노드
            {
                b_check[i] = true;
                q.push(i);
            }
        }
    }
}

int main(){
    int M,V;
    cin>>N>>M>>V; //입력

    for(int i = 0;i<M;i++) //입력받고 배열에 넣음
    {
        int n1,n2;
        cin>>n1>>n2;
        arr[n1][n2] = 1;
        arr[n2][n1] = 1;
        d_check[n1] = false;
        d_check[n2] = false;
        b_check[n1] = false;
        b_check[n2] = false;
    }
    dfs(V);
    cout<<"\n";
    bfs(V);
}

