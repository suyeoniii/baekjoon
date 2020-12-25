#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N,M;
    int in;
    int ans = 0;
    bool ok = false;
    vector< vector<int> > v;
    vector<int> temp;

    cin>>N>>M;

    for(int i = 0;i<N;i++){
        
        for(int j = 0;j<M;j++){
            cin>>in;
            temp.push_back(in);
        }
        v.push_back(temp);
    }
    for(int i = 0;i<N;i++){
        
        ok = false;
        for(int j = 0;j<M;j++){
            if(v[i][j]=='X'){
                ok = true;
                break;
            }
        }
        if(ok==false){
            ans+=1;
        }
        
    }
    for(int i = 0;i<M;i++){
        
        ok = false;
        for(int j = 0;j<N;j++){
            if(v[i][j]=='X'){
                ok = true;
                break;
            }
        }
        if(ok==false){
            ans+=1;
        }
        
    }
    cout<<ans/2;

}