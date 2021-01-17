#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
    int N;
    int arr[11] = {0, };
    int ans[11] = {0, };
    int count = 0;
    cin >> N;

    for(int i = 0; i<N; i++){
        int a;
        cin>>a;
        arr[i] = a;
    }

    for(int i = 0; i<N; i++){
        count = 0;
        for(int j = 0; j<N; j++){
            if(count == arr[i] && ans[j]==0){
                ans[j] = i+1;
                break;
            }
            else if(ans[j]==0){
                count += 1;
            }
        }
    }

    for(int i = 0; i<N; i++) {
        cout<<ans[i]<<" ";
    }
}
