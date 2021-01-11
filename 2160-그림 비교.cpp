#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    int mi = 0;
    int min_a,min_b;
    cin>>N;

    string arr[300];
    int ans[300][300] = {0,};

    for(int i = 0; i<5*N; i++){
        string s;
        cin>>s;

        arr[i]=s;
    }

    for(int i = 0; i<N; i++){ //전체 인덱
        for(int j = i+1; j<N; j++) {  //비교 인덱
            int answer = 0;
            for (int k = 0; k < 5; k++) {  //행
                for (int r = 0; r < 7; r++) {  //열
                    if (arr[i * 5 + k][r] == arr[j * 5 + k][r]) {
                        answer += 1;
                    }
                }
            }
            ans[i][j]=answer;
        }
    }

    for(int i = 0; i<N; i++){
        for(int j = i+1; j<N; j++){
            if(ans[i][j]>mi){
                mi=ans[i][j];
                min_a = i+1;
                min_b = j+1;
            }
        }
    }
    cout<<min_a<<' '<<min_b;
}
