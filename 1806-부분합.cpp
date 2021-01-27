#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    long long N, S;
    long long ans = 100001;
    long long left = 0, right = 0;
    long long arr[100001];
    cin>>N>>S;

    for(int i = 0; i<N; i++){
        cin>>arr[i];
    }

    long long sum = arr[0];
    while(left<=right && right<N){
        if(sum < S){
            right += 1;
            sum += arr[right];
        }
        else if(sum == S){
            ans = min(ans, right - left + 1);
            sum -= arr[left];
            left += 1;
        }
        else if(sum > S){
            ans = min(ans, right - left + 1);
            sum -= arr[left];
            left += 1;
        }
    }

    if(ans == 100001){
        cout<<0;
    }
    else{
        cout<< ans;
    }
}
