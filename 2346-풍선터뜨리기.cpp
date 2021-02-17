#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<pair<int, int>> v;
    int N;
    cin>>N;

    for(int i = 0; i<N; i++){
        int n;
        cin>>n;
        v.push_back(make_pair(i + 1, n));
    }
    int i = 0;
    int MAX = N;
    int move = 0;
    while(i<MAX-1){
        cout<<v[move].first<<" ";

        int temp = v[move].second;
        if (temp > 0)
            temp--;
        v.erase(v.begin() + move);
        move += temp;
        if (--N == 0)
            break;

        move = (move >= 0 ? move : N + move % N);
        move %= N;

        i++;
    }
    cout<<v[move].first;

}
