#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;

    while(N>=9){
        N-=8;
    }
    if(N==8){
        N = 2;
    }
    else if(N==7){
        N = 3;
    }
    else if(N==6){
        N = 4;
    }

    cout<<N;
}