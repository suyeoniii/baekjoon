#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

typedef long long ll;

int main(){
    int N;
    scanf("%d", &N);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for(int i = 0; i<N; i++){
        int n;
        scanf("%d", &n);

        if(n==0){
            if(pq.empty()){
                printf("0\n");
            }
            else{
                printf("%d\n", pq.top().second);
                pq.pop();
            }
        }
        else{
            if(n<0){
                pq.push(make_pair(-n, n));
            }
            else{
                pq.push(make_pair(n, n));
            }
        }
    }
}
