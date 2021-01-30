#include <iostream>
#include <map>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    map<string, int> m;
    vector<pair<int, string>> v;

    int K, L;
    cin>>K>>L;

    for(int i = 0; i<L; i++){
        string num;
        cin>>num;
        m[num] = i;
    }

    for(auto iter = m.begin(); iter != m.end(); iter++){
        v.push_back(make_pair(iter->second, iter->first));
    }
    sort(v.begin(), v.end());

    for(int i = 0; i<K && i<v.size(); i++){
        cout<<v[i].second<<"\n";
    }
}
