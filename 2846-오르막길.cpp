#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    int length = 0;
    int start = 0;
    vector<int> load;

    cin>>N;
    for(int i = 0; i<N; i++){
        int a;
        cin>>a;
        load.push_back(a);
    }
    load.push_back(0);

    for(int i = 1; i<load.size(); i++) {
        if(load[i-1]<load[i]){
            if(start==0) start = load[i-1];
        }
        else{
            if(start!=0){
                if(length < load[i-1]-start) {
                    length = load[i-1] - start;
                }
                start = 0;
            }
        }
    }

    cout<<length;
}
