#include <iostream>
using namespace std;

int main(){
    int day;
    cin>>day;

    int ans = 0;
    for(int i = 0;i<5;i++){
        int input;
        cin>>input;

        if(input==day){
            ans+=1;
        }
    }
    cout<<ans;
}