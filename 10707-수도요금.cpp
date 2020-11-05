#include <iostream>
using namespace std;

int main(){
    int A,B,C,D,P;
    cin>>A>>B>>C>>D>>P;

    int X;
    X = A*P;

    int Y;
    if(P<=C){
        Y = B;
    }
    else{
        Y = B+D*(P-C);
    }

    if(X<=Y){
        cout<<X;
    }
    else{
        cout<<Y;
    }
}