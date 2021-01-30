#include <iostream>
#include <map>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int T;

    cin>>T;

    for(int i = 0; i<T; i++){
        int n;
        cin>>n;

        vector<string> v;
        map<string,int> m;
        map<int, string> cyper;

        for(int j = 0; j<n; j++){
            string s;
            cin>>s;
            v.push_back(s);
        }

        for(int j = 0; j<n; j++){
            string s;
            cin>>s;
            m[s] = j;
        }

        for(int j = 0; j<n; j++){
            string s;
            cin>>s;
            cyper[j] = s;
        }

        for(int j = 0; j<n; j++){
            cout<<cyper[m[v[j]]]<<" ";
        }
        cout<<"\n";
    }
}
