#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin>>N>>M;
    deque<int> dq;

    for(int i = 0; i<N; i++){
        dq.push_back(i+1);
    }

    unsigned long move = 0;
    int cursor = 0;
    int ans = 0;
    for(int i = 0; i<M; i++){
        int n;
        cin>>n;

            move = 0;
            while(dq[cursor]!=n){
                cursor++, move++;
                if(cursor>=dq.size()){
                    cursor %= dq.size();
                }
            }
            dq.erase(dq.begin()+cursor);
            move = min(move, dq.size()-move+1);
            ans += int(move);

    }
    cout<<ans;
}
