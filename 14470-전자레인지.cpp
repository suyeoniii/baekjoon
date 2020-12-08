#include <iostream>

using namespace std;

int main(){
    int A,B,C,D,E;
    int ans = 0;
    cin>>A>>B>>C>>D>>E;

    while(A<B){
        if(A<0){
            A += 1;
            ans+=C;

            if(A==0){
                ans+=D;
            }
        }
        else{
            A += 1;
            ans+= E;
        }
    }
    cout<<ans;
}