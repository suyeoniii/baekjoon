#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin>>N;

    for (int i = 0; i < N; ++i) {
        deque<char> dq;
        string s;
        cin>>s;

        int cursor = 0;
        for(int i = 0; i<s.length(); i++){
            if(s[i]=='-'){
                if(!dq.empty()&&cursor-1>=0&&cursor-1<=dq.size()){
                    dq.erase(dq.begin() + cursor - 1);
                    cursor--;
                    if(cursor<0){
                        cursor = 0;
                    }
                }
            }
            else if(s[i]=='<'){
                cursor--;
                if(cursor<0){
                    cursor = 0;
                }
            }
            else if(s[i]=='>'){
                cursor++;
                if(cursor>dq.size()){
                    cursor--;
                }
            }
            else{
                dq.insert(dq.begin() + cursor, s[i]);
                cursor++;
            }
        }

        while(!dq.empty()){
            cout<<dq.front();
            dq.pop_front();
        }
        cout<<"\n";
    }
}
