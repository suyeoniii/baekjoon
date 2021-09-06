#include <iostream>
#include <queue>
#include <vector>
#include <cstring>

using namespace std;

//다익스트라

int main(){
    int N, M, K, X;
    cin>>N>>M>>K>>X;

    vector<pair<int, int>> v[300001];
    int dist[300001];

    for(int i = 0; i<M; i++){
        int s, e;
        cin>>s>>e;
        v[s].push_back(make_pair(e, 1));
    }

    //거리 배열 큰 값으로 초기화
    memset(dist, 0x7f, sizeof(dist));

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    //시작 노드 큐에 추가
    pq.push({0, X});

    dist[X] = 0;

    while(!pq.empty()){
        int index = pq.top().second;
        int cost = pq.top().first;

        pq.pop();

        if(dist[index] != cost) continue;

        for(int i = 0; i<v[index].size(); i++){
            int next = v[index][i].first;
            int w = v[index][i].second;

            if(dist[next] > dist[index] + w){
                dist[next] = dist[index] + w;
                pq.push(make_pair(dist[next], next));
            }
        }
    }

    bool isit = false;
    for(int i = 1; i<=N; i++){
        if(dist[i]==K){
            isit = true;
            cout<<i<<"\n";
        }
    }

    if(!isit)
        cout<<-1;

}