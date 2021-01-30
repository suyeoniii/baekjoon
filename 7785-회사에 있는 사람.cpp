#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <map>
#include <utility>

using namespace std;

int main(){
    map<string, int> m;

    int N;
    cin>>N;

    for(int i = 0; i<N; i++){
        string s1, s2;
        cin>>s1>>s2;
        if(s2=="enter"){
            m[s1] = 1;
        }
        else{
            m[s1] = 0;
        }
    }
    map<string, int>::reverse_iterator iter;
    for( iter = m.rbegin(); iter != m.rend(); ++iter){
        if(iter->second==1){
            cout<<iter->first<<"\n";
        }
    }
}
