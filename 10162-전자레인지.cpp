#include <iostream>
using namespace std;

int main(){
    int num = 0;
    cin>>num;
    int s1,s2,s3;

    if(num/300>=0){
        s1 = num/300;
        num = num-300*(num/300);
    }
    if(num/60>=0){
        s2 = num/60;
        num = num-60*(num/60);
    }
    if(num/10>=0){
        s3 = num/10;
        num = num-10*(num/10);
    }

    if(num==0){
        cout<<s1<<" "<<s2<<" "<<s3;
    }
    else{
        cout<<-1;
    }
    
}