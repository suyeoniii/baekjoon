#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n,k;
    int price = 0;
    cin>>n>>k;

    k = 60+k;
    if(k<=n){
        price = k*1500;
        price += (n-k)*3000;
    }
    else{
        price = n*1500;
    }
    cout<<price;
}