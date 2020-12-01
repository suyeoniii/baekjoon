#include <iostream>
using namespace std;

int main(){
    double t,p;
    double ans = 0;
    cin>>t>>p;
    cout.precision(8);

    if(p>=20){
        ans = (100-p)/t;
    }
    else{
        ans = t/(100-p+20-p)*p*2;

    }
    cout<<ans;
}