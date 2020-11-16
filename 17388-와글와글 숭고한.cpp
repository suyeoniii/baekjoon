#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int s,k,h;
    cin>>s>>k>>h;

    if(s+k+h>=100){
        cout<<"OK";
    }
    else{
        int ans = min(min(s,k),h);
        if(ans==s){
            cout<<"Soongsil";
        }
        else if(ans==k){
            cout<<"Korea";
        }
        else{
            cout<<"Hanyang";
        }
    }


}