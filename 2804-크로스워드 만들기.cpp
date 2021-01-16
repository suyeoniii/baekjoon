#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s1, s2;
    int n1=-1,n2=-1;
    cin>>s1>>s2;

    for(int i = 0; i<s1.length(); i++){
        for(int j = 0; j<s2.length(); j++){
            if(s1[i]==s2[j]){
                n1=j;
                n2=i;
                break;
            }
        }
        if(n1!=-1){
            break;
        }
    }

    for(int i = 0; i<s2.length(); i++){
        for(int j = 0; j<s1.length(); j++){
            if(i==n1){
                cout<<s1[j];
            }
            else if(j==n2){
                cout<<s2[i];
            }
            else {
              cout<<'.';
            }
        }
        cout<<"\n";
    }
}
