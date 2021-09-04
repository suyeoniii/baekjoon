#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N,M;
    vector<int> A;
    vector<int> B;

    cin>>N;

    for(int i = 0; i<N; i++){
        int n;
        cin>>n;
        A.push_back(n);
    }

    cin>>M;

    for(int i = 0; i<M; i++){
        int n;
        cin>>n;
        B.push_back(n);
    }

    sort(A.begin(), A.end());

    for(int i = 0; i<M; i++){
        int left = 0;
        int right = A.size()-1;
        int answer = 0;

        while(left<=right){
            int mid = (left+right)/2;

            if(B[i]<=A[mid]){
                answer = A[mid];
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        if(answer==B[i]) cout<<1<<"\n";
        else cout<<0<<"\n";
    }
}
