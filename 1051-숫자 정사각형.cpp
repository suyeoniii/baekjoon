#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int N, M;
    int num;
    string n;
    int ans = 0;
    vector <vector<int>> v;
    cin>>N>>M;

    int ma = max(N,M);
    int mi = min(N, M);

    for(int i = ma; i>0;i--){
        if(i<=mi){
            ma = i;
            break;
        }
    }

    for(int i = 0; i<N; i++){
        vector<int> v2;
        string n;
        cin>>n;
        for(int j = 0; j<M; j++){
            v2.push_back(n[j]-'0');
        }
        v.push_back(v2);
    }

    for(int k = ma; k > 0; k--) {
        for (int i = 0; i < M-(k-1); i++) {
            for(int j = 0; j < N-(k-1); j++){
                num = v[j][i];
                if(num==v[j][i+(k-1)]&&num==v[j+(k-1)][i]&&num==v[j+(k-1)][i+(k-1)]){
                    ans = k*k;
                    break;
                }
            }
        }
        if(ans!=0){
            cout<<ans;
            break;
        }
    }
}
