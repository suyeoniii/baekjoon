#include <iostream>

using namespace std;

int main(){
    int a1,a2,a3;
    int b1,b2,b3;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;

    int a = a1*3+a2*2+a3;
    int b = b1*3+b2*2+b3;

    if(a>b){
        cout<<"A";
    }
    else if(b>a){
        cout<<"B";
    }
    else{
        cout<<"T";
    }
} 