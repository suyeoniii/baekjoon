#include <iostream>
using namespace std;

int main(){
    int T;
    cin>>T;

    int ans = 0;
    for(int i = 0;i<5;i++){
        int A;
        cin>>A;
        if(A==T){
            ans+=1;
        }
    }
    cout<<ans;
}