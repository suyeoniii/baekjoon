#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int main(){
    int N, M;
    int arr[15001];
    int left = 0, right = 0;
    deque<int> small;
    deque<int> big;
    cin>>N>>M;

    for(int i = 0; i<N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+N);
    for(int i = 0; i<N; i++){
        if(arr[i]<=M/2){
            small.push_front(arr[i]);
        }
        else{
            big.push_back(arr[i]);
        }
    }
    int sum;
    int ans = 0;
    while(left<small.size()&&right<big.size()){
        sum = small[left]+big[right];
        if(sum==M){
            swap(small[left], small[0]);
            swap(big[right], big[0]);
            small.pop_front();
            big.pop_front();
            ans += 1;
        }
        else if(sum<M){
            right += 1;
        }
        else if(sum>M){
            left += 1;
        }
    }
    cout<<ans;



}
