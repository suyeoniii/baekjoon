#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    long long N, M;
    long long arr[10001];
    long long ans = 0;
    long long left = 0, right = 0;


    cin>>N>>M;
    for(int i = 0; i<N; i++){
        cin>>arr[i];
    }

    long long sum = arr[0];
    while(left<=right && right < N){
        if(sum < M){
            sum += arr[++right];
        }
        else if(sum == M){
            ans += 1;
            sum += arr[++right];
        }
        else if(sum > M){
            sum -= arr[left++];
            if (left > right && left < N)
            {
                right = left;
                sum = arr[left];
            }
        }
    }

    cout<<ans;
}
