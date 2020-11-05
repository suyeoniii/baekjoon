#include <iostream>
using namespace std;

int main(){
    
    int ans = 0;
    int min = 100;
    for(int i = 0;i<4;i++){
        int a;
        cin>>a;
        ans+=a;
        if(min>a){
            min = a;
        }
    }
    ans -= min;

    min = 100;
    for(int i = 0;i<2;i++){
        int b;
        cin>>b;

        ans+=b;
        if(min>b){
            min = b;
        }
    }
    ans -= min;
    cout<<ans;
    
}