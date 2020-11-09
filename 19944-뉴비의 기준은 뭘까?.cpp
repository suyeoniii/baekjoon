#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int N,M;
    cin>>N>>M;

    if(M==1||M==2){
        cout<<"NEWBIE!";
    }
    else if(M<=N){
        cout<<"OLDBIE!";
    }
    else{
        cout<<"TLE!";
    }

}