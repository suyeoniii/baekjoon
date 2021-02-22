#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

typedef long long ll;

int main(){
    int N;
    scanf("%d", &N);
    priority_queue<int> pq;

    for(int i = 0; i<N; i++){
        int n;
        scanf("%d", &n);

        if(n==0){
            if(pq.empty()){
                printf("0\n");
            }
            else{
                printf("%d\n", pq.top());
                pq.pop();
            }
        }
        else{
            pq.push(n);
        }
    }
}
