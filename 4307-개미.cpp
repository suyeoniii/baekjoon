#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int T;
    cin>>T;

    for(int i = 0; i<T; i++){
        int fast= 0, slow = 0;
        vector<int> v;
        int l, n;
        cin>>l>>n;

        for(int j = 0; j<n; j++){
            int a;
            cin>>a;

            v.push_back(a);
        }

        int mi = 0, ma = 0;

        for(int i = 0; i<v.size(); i++){
            mi = max(mi, min(v[i], l-v[i]));
            ma = max(ma, max(v[i], l-v[i]));
        }

        cout<<mi<<" "<<ma<<"\n";
    }
}
