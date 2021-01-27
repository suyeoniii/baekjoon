#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    long long N, M;
    long long arr[100001];
    long long ans = 0;

    cin>>N>>M;
    for(int i = 0; i<N; i++){
        cin>>arr[i];
    }

    long long left = 0, right = M-1;
    long long sum = 0;

    for (int i = left; i <= right; i++) {
        sum += arr[i];
    }

    ans = sum;
    while(right < N-1){
        sum -= arr[left++];
        sum += arr[++right];

        if(sum > ans){
            ans = sum;
        }
    }

    cout<<ans;
}
