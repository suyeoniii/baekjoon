#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int N, M;

bool calc(int num){
    int ans = 1;
    int tmp = num;

    int i = 0;
    while(i<v.size()){
        if(v[i]>num){
            return false;
        }
        if(v[i]<=tmp){
            tmp -= v[i];
            i++;
        }
        else { //v[i]>tmp
            ans += 1;
            tmp = num;
        }
    }

    if(ans<=M){
        return  true;
    }
    else{
        return false;
    }
}

int main(){
    scanf("%d", &N);
    scanf("%d", &M);

    int MAX = 0;
    for(int i = 0; i<N; i++){
        int n;
        scanf("%d", &n);

        v.push_back(n);

        MAX += n;
    }

    int left = 1, right = MAX+1;
    int ans = MAX+1;
    while(left<=right){
        int mid = (left + right) / 2;

        if(calc(mid)){
            if(ans > mid){
                ans = mid;
            }
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    printf("%d", ans);
}
