#include <iostream>
using namespace std;

int main(){
    int a1,o1,a2,o2;
    cin>>a1>>o1>>a2>>o2;

    if(a1+o2<=a2+o1){
        cout<<a1+o2;
    }
    else
    {
        cout<<a2+o1;
    }
    
}