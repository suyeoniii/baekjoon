#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string K, S;
    int N;
    string input[51];

    string move[] = {"R", "L", "B","T", "RT", "LT","RB", "LB"};
    int ny[] = {0, 0, 1, -1, -1, -1, 1, 1};
    int nx[] = {1, -1, 0, 0, 1, -1, 1, -1};

    cin>>K>>S>>N;

    int ky= 8-(K[1]-'0'), kx = K[0]-'A';
    int sy = 8-(S[1]-'0'), sx = S[0]-'A';
    for(int i = 0; i<N; i++){
        string m;
        cin>>m;

        for(int j = 0; j<8; j++){
            if(m==move[j]){
                ky += ny[j];
                kx += nx[j];

                if(ky==sy && kx==sx){
                    sy += ny[j];
                    sx += nx[j];
                    if(ky>=8 || ky <0 || kx>=8 || kx <0 || sy>=8 || sy <0 || sx>=8 || sx <0){
                        ky -= ny[j];
                        kx -= nx[j];

                        sy -= ny[j];
                        sx -= nx[j];
                    }
                }
                else{
                    if(ky>=8 || ky <0 || kx>=8 || kx <0){
                        ky -= ny[j];
                        kx -= nx[j];
                    }
                }
                break;
            }
        }
    }

    char k = kx + 'A';
    char s = sx + 'A';
    cout<<k<<8-ky<<"\n";
    cout<<s<<8-sy;
}
