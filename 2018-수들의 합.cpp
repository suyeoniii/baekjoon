#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    long long N, M;
    long long ans = 0;
    long long left = 0, right = 0;


    cin>>N;
    long long sum = 0;
    while(left<=right && right <= N){
        if(sum < N){
            sum += ++right;
        }
        else if(sum == N){
            ans += 1;
            sum += ++right;
        }
        else if(sum > N){
            sum -= left++;
            if (left > right && left < N)
            {
                right = left;
                sum = left;
            }
        }
    }

    cout<<ans;
}
