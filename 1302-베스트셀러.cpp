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
        string s1;
        cin>>s1;
        m[s1] += 1;
    }
    int num = 0;
    string book = "";
    for(auto iter = m.begin(); iter != m.end(); iter++){
            if(iter->second>num){
                num = iter->second;
                book = iter->first;
            }
    }
    cout<<book;
}
