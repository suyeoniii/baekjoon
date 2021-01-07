#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N,P,ans=0;
    vector<int> v;
    cin>>N>>P;

    int num1 = N;
    v.push_back(N);

    while(ans==0){
        num1 = (num1*N)%P;
        v.push_back(num1);

        for(int i = 0; i < v.size()-1; i++) {
            if (v[i] == num1) {
                ans = v.size() - (i+1);
                break;
            }
        }
    }
    
    cout<<ans;
}
