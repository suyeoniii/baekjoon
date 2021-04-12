#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(0);

    string N;
    cin>>N;

    string ans = "NO";

    if(N.length() >= 2){
        for(int i = 0; i<N.length(); i++){

            int left = 1;
            int right = 1;

            int j = 0;
            while(j<i){
                left *= N[j]-'0';
                j++;
            }
            while(j<N.length()){
                right *= N[j]-'0';
                j++;
            }

            if(left==right){
                ans = "YES";
                break;
            }
        }
    }

    cout<<ans;
    return 0;
}


