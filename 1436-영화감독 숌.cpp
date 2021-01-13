#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;


int main(){
    int N;
    long long num = 665;
    long long ans = 0;
    int length = 0;
    cin>>N;

    int count = 0;
    while(count!=N){
        length = 0;
        for(int i = 10; num/(i/10) > 0; i*=10){
            if(length == 3){
                count += 1;
                ans = num;
                length = 0;
                break;
            }

            int one = (num%i)/(i/10);

            if(one == 6){
                length += 1;
            }
            else{
                length = 0;
            }
        }
        if(length == 3){
            count += 1;
            ans = num;
        }
        num += 1;
    }
    cout<<ans;
}
