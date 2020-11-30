#include <iostream>
using namespace std;

int main(){
    cout.precision(100);
    double d1,d2;
    cin>>d1>>d2;

    double ans = 0;
    ans+=d1*2;
    ans+=3.141592*d2*2;

    cout<<ans;
}