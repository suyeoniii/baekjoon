#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

typedef long long ll;

int main(){
    int R,B;
    scanf("%d",&R);
    scanf("%d",&B);

    int x,y;
    int sum = R+B;

    vector<pair<int,int>> v;
    for(int i = 1; i<=sum/2; i++){
        if(sum%i==0){
            v.push_back(make_pair(i,sum/i));
        }
    }

    for(int i = 0; i<v.size(); i++){
        int s = v[i].first + v[i].second;
        int mul = v[i].first * v[i].second;
        int r = s * 2 -4;
        if(r==R && mul - R == B){
            x = v[i].second;
            y = v[i].first;
            break;
        }
    }

    printf("%d %d",x,y);
    return 0;
}
