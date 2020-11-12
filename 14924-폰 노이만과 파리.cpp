#include <iostream>

using namespace std;

int main(){
    int S,T,D,F;
    cin>>S>>T>>D;

    int time = D/(S*2);
    F = time*T;

    cout<<F;
}