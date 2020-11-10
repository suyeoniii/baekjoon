#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int S,M,L;
    cin>>S>>M>>L;

    int formula = 1 * S + 2 * M + 3 * L;

    if(formula>=10){
        cout<<"happy";
    }
    else{
        cout<<"sad";
    }
}