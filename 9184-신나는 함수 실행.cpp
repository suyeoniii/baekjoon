#include <iostream>

using namespace std;

int memo[110][110][110];

int dp(int a, int b, int c){
    if(memo[a+50][b+50][c+50]==0) {
        if ((a <= 0 || b <= 0) || c <= 0) {
            return 1;
        } else if ((a > 20 || b > 20) || c > 20) {
            memo[a+50][b+50][c+50] = dp(20, 20, 20);
        }
        else if(a<b && b<c){
            memo[a+50][b+50][c+50] = dp(a, b, c-1) + dp(a, b-1, c-1) - dp(a, b-1, c);
        }
        else{
            memo[a+50][b+50][c+50] = dp(a-1, b, c) + dp(a-1, b-1, c) + dp(a-1, b, c-1) - dp(a-1, b-1, c-1);
        }
    }
    return memo[a+50][b+50][c+50];
}

int main() {
    int a,b,c;
    while(1){
        cin>>a>>b>>c;

        if(a==-1&&b==-1&&c==-1) {
            break;
        }
            cout << "w(" << a << ", " << b << ", " << c << ") = ";

            cout << dp(a, b, c);

            cout << "\n";

    }

}
