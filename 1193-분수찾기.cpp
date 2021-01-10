#include <iostream>
using namespace std;

int main(){
    long long X;
    long long i = 0;
    long long a=1,b=1;
    cin>>X;

    while(X>0){
        i++;
        X-=i;
    }

    X=-X;

        if (i % 2 == 0) { //i가 짝수
            a = i;
            b = 1;

            a = a - X;
            b = b + X;
        } else { //i 홀수
            a = 1;
            b = i;

            a = a + X;
            b = b - X;
        }

        cout << a <<'/'<< b;

}
