#include <iostream>
using namespace std;

int main(){
    int c;
    int h1,m1,s1;
    int h2,m2,s2;
    int h,m,s;
    int ans = 0;

    cin>>h1>>c>>m1>>c>>s1>>h2>>c>>m2>>c>>s2;
    h = h2-h1;
    m = m2-m1;
    s = s2-s1;

    if(s<0){
        s = 60-s;
        m = m-1;
    }
    if(m<0){
        m = 60-m;
        h = h-1;
    }
    if(h<0){
        h = h+24;
    }
    ans = s+m*60+h*60*60;
    cout<<ans;

}