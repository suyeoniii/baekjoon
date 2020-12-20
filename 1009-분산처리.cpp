#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long long T;
    cin>> T;
    for(int i = 0;i<T;i++){
        long long a,b;
        cin>>a>>b;
        a = a%10;
        b = b%4;
        if(b==0){
            b = 4;
        }
        long long num = pow(a,b);
        num = num%10;
        if(num==0){
            num = 10;
        }
        cout<<num<<"\n";
    }
}