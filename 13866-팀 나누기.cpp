#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int A,B,C,D;
    cin>>A>>B>>C>>D;

    int A1 = max(A,B)-min(A,B);
    int B1 = max(C,D)-min(C,D);
    int A2 = max(A,C)-min(A,C);
    int B2 = max(B,D)-min(B,D);
    int A3 = max(A,D)-min(A,D);
    int B3 = max(B,C)-min(B,C);

    int S1 = max(A1,B1)-(min(A1,B1));
    int S2 = max(A2,B2)-(min(A2,B2));
    int S3 = max(A3,B3)-(min(A3,B3));

    int num = min(min(S1,S2),S3);

    cout<<num;
}