#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main(){
    int T;
    cin>>T;

    for(int i = 0; i<T; i++){
        int N, M;
        deque<pair<int, int>> q;
        cin>>N>>M;

        for(int j = 0; j<N; j++){
            int n;
            cin>>n;

            q.push_back(make_pair(j, n));
        }
        int ans = 0;
        while(q.size()!=0){
            bool isit = true;
            int imp = q[0].second;
            for(int j = 1; j<q.size(); j++){
                if(q[j].second>imp){
                    q.push_back(make_pair(q[0].first, imp));
                    q.pop_front();
                    isit = false;
                    break;
                }
            }
            if(isit==true){
                ans += 1;
                if(q[0].first==M){
                    q.pop_front();
                    break;
                }
                q.pop_front();
            }
        }
        cout<<ans<<"\n";
    }
}
