#include <iostream>
using namespace std;

int main(){
    string ans = "answer";
    int n1,n2,n3,n4;
    cin>>n1>>n2>>n3>>n4;

    if(n1==9||n1==8){
        if(n4==9||n4==8){
            if(n2==n3){
                ans = "ignore";
            }
        }
    }
    cout<<ans;
}