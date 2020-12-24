#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;

    int ans = 0;
    int num = 0;
    int num2 = 0;
    int subtract = 0;
    int temp;
    bool ishan = true;

    for(int i = 1;i<=N;i++){
        if(i<100){
            ans+=1;
            continue;
        }
        temp=100;
        ishan = true;
        for(int j = 10;i/j>0;j*=10){
                num = (i%j)/(j/10);
                num2 = i%(j*10)/(j*1);
                subtract = num - num2;
            
                if(temp==100){
                    temp = subtract;
                    continue;
                }
                if(subtract==temp){
                    ;
                }
                else{
                    ishan = false;
                    break;
                }
                temp = subtract;
        }
        if(ishan==true){
            ans += 1;
        }
    }
    cout<<ans;

}