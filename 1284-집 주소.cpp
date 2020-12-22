#include <iostream>
using namespace std;

int main(){
    string num = "";
    int ans = 2;
    while(1){
        ans = 2;
        cin>>num;
        if(num=="0"){
            break;
        }
        for(int i = 0;i<num.length();i++){
            if(num[i]=='0'){
                ans+=4;
            }
            else if(num[i]=='1'){
                ans+=2;
            }
            else{
                ans+=3;
            }
        }
        ans+=num.length()-1;
        cout<<ans<<"\n";
    }
}