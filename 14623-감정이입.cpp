#include <iostream>

using namespace std;

int main(){
    long long B1;
    string B2;
    cin>>B1>>B2;

    int ans = 0;
    for(int i = B2.length()-1;i>=0;i--){
        if(B2[i]=='1'){
            ans+=B1;
        }
        else if(B2[i]=='0'){
            ans*=10;
        }
    }
    cout<<ans;
}