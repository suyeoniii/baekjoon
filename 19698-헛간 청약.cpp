#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int N,W,H,L;
    cin>>N>>W>>H>>L;

    int w = W/L;
    int h = H/L;

    int ans = w*h;
    if(ans<=N){
        cout<<ans;
    }
    else{
        cout<<N;
    }
}