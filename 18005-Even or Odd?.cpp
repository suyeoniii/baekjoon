#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;

    if(N%2==1){
        cout<<"0";
    }
    else{
        int num = N/2;
        if(num%2==1){
            cout<<"1";
        }
        else{
            cout<<"2";
        }
    }
}