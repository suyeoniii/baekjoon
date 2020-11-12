#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << fixed;
    cout.precision(15);

    long long L;
    cin>>L;

    double size;
    size = 3*sqrt(3)/2*pow(L,2);

    size = size/6;
    cout<<size;
}