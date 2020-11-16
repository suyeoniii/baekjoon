#include <iostream>

using namespace std;

int main(){
    int Ca,Ba,Pa,Cr,Br,Pr;

    cin>>Ca>>Ba>>Pa>>Cr>>Br>>Pr;
    
    int ans = 0;
    if(Cr-Ca>0){
        ans+=Cr-Ca;
    }
    if(Br-Ba>0){
        ans+=Br-Ba;
    }
    if(Pr-Pa>0){
        ans+=Pr-Pa;
    }
    cout<<ans;
}