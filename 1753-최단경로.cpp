#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>

using namespace std;



int main(){

    vector<pair<int, int>> v[300001];
    int dist[300001];

    int V, E, K;
    cin>>V>>E>>K;

    for(int i = 0; i<E; i++){
        int s, e, d;
        cin>>s>>e>>d;

        v[s].push_back(make_pair(e, d));
    }

    memset(dist, 0x7f, sizeof(dist));
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({0, K});
    dist[K] = 0;

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

    for(int i = 1; i<=V; i++){
        if(dist[i]==2139062143)
            cout<<"INF"<<"\n";
        else
            cout<<dist[i]<<"\n";
    }
}