#include <iostream>
using namespace std;

int main(){
    long long int R,C,N;
    cin>>R>>C>>N;
    long long int ans;

    if(R%N==0){
        ans = R/N;
    }
    else{
        ans = R/N+1;
    }

    if(C%N==0){
        ans = ans*(C/N);
    }
    else{
        ans = ans*(C/N+1);
    }
    cout<<ans;
}