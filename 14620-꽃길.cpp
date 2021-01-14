#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int arr[11][11];
int check[11][11];
int N;
int nx[] = {0, -1, 1, 0, 0};
int ny[] = {0, 0, 0, 1, -1};
int ans = 10000;
int tmp = 0;

bool chk(int x, int y){
    for(int i = 0; i<5; i++){
        if(check[x+nx[i]][y+ny[i]]){
            return true;
        }
    }
    return false;
}

void go(int cnt) {
    if (cnt == 3) {
        for (int i = 0; i < N ; i++) {
            for (int j = 0; j < N ; j++) {
                if(check[i][j]) {
                    tmp += arr[i][j];
                }
            }
        }
        if (tmp < ans) {
            ans = tmp;
        }
        tmp = 0;
        return;
    }

    for (int i = 1; i < N - 1; i++) {
        for (int j = 1; j < N - 1; j++) {
            if (!chk(i, j)) {
                for (int k = 0; k < 5; k++) {
                    check[i + nx[k]][j + ny[k]] = true;
                }
                go(cnt + 1);
                for (int k = 0; k < 5; k++) {
                    check[i + nx[k]][j + ny[k]] = false;
                }
            }
        }
    }
}

int main(){
    cin>>N;

    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            int a;
            cin>>a;

            arr[i][j] = a;
        }
    }

    go(0);
    cout<<ans;
}
