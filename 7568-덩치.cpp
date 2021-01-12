#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int N;
    cin>>N;

    vector <pair< int, int >> v;
    vector<int> ans;
    int answer = 0;
    int x = 0, y = 0;

    for(int i = 0; i<N; i++){
        cin>>x>>y;

        v.push_back(make_pair(x, y));
    }

    for(int i = 0; i<v.size(); i++){
        answer = 0;
        for(int j = 0; j<v.size(); j++){
            if(i!=j){
                if(v[i].first<v[j].first&&v[i].second<v[j].second){
                    answer+=1;
                }
            }
        }
        ans.push_back(answer+1);
    }
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<' ';
    }
}
