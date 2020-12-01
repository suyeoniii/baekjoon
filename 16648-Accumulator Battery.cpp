#include <iostream>
using namespace std;

int main(){
    double t,p;
    double ans = 0;
    cin>>t>>p;
    cout.precision(10);

    if(p>=20){
        ans = (100-p)/t;
        ans = (p-20)/ans+20/(ans/2);
    }
    else{
        ans = (80+(20-p)*2)/t;
        ans = p/(ans/2);

    }
    cout<<ans;
}