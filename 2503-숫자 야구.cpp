#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int N;
    int ans = 0;
    cin>>N;

    int arr[1000] = {0,};

    for(int j = 0; j<N; j++) {
        int num;
        int s, b;
        cin >> num >> s >> b;

        for(int k = 123; k<=987; k++) {

            if((k/100)==(k%100)/10||(k/100)==k%10||(k%100)/10==k%10){
                continue;
            }
            if((k/100)==0||(k%100)/10==0||(k%10)==0){
                continue;
            }

            int ns = 0;
            int nb = 0;

            if(num/100==k/100){
                ns+=1;
            }
            if((num%100)/10==(k%100)/10){
                ns+=1;
            }
            if(num%10==k%10){
                ns+=1;
            }
            if((num/100==(k%100)/10)||(num/100==k%10)){
                nb+=1;
            }
            if((num%100)/10==k/100||(num%100)/10==k%10){
                nb+=1;
            }
            if(num%10==k/100||num%10==(k%100)/10){
                nb+=1;
            }

            if(ns==s&&nb==b){
                arr[k]+=1;
            }
        }
    }
    for (int i = 123; i <= 987; i++) {
        if(arr[i]==N) {
            ans+=1;
        }
    }
    cout<<ans;
}
