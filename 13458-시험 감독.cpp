#include <string>
#include <vector>]
#include <iostream>
using namespace std;

int main() {
    long long T;
    long long answer = 0;
    vector<long long> A;
    cin>>T;

    for(int i = 0; i<T; i++){
        int a;
        cin>>a;
        A.push_back(a);
    }
    long long B, C;
    cin>>B>>C;

    for(int i = 0; i<A.size(); i++){
        A[i] = A[i]-B;
        answer += 1;

        if(A[i]>0) {
            answer += A[i] / C;
            if (A[i] % C != 0) answer += 1;
        }
    }
    cout<<answer;
}
