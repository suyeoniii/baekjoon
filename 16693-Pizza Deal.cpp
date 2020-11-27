#include <iostream>
using namespace std;

int main(){
    double A1,P1,R1,P2;
    cin>>A1>>P1>>R1>>P2;

    if(A1*P2>R1*R1*3.1415926535*P1){
        cout<<"Slice of pizza";
    }
    else{
         cout<<"Whole pizza";
    }
}