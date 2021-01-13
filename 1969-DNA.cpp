#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

int main(){
    int N, M;
    vector<string> v;
    int dna[5] = {0,};
    int ma = 0;
    string answer = "";
    int dis = 0;
    cin>>N>>M;

    for(int i = 0; i<N; i++){
        string s;
        cin>>s;
        v.push_back(s);
    }

    for(int i = 0; i<M; i++){
        for(int j = 0; j<N; j++){
            if(v[j][i]=='A'){
                dna[0] += 1;
            }
            else if(v[j][i]=='C'){
                dna[1] += 1;
            }
            else if(v[j][i]=='G'){
                dna[2] += 1;
            }
            else if(v[j][i]=='T'){
                dna[3] += 1;
            }
        }
        ma = max(max(max(dna[0], dna[1]), dna[2]), dna[3]);

        if(dna[0]==ma){
            answer += 'A';
        }
        else if(dna[1]==ma){
            answer += 'C';
        }
        else if(dna[2]==ma){
            answer += 'G';
        }
        else if(dna[3]==ma){
            answer += 'T';
        }

        for(int i = 0; i<4; i++){
            dna[i] = 0;
        }
    }

    cout<<answer<<"\n";

    for(int i = 0; i<N; i++){
        for(int k = 0; k<M; k++){
            if(v[i][k]!=answer[k]){
                dis += 1;
            }
        }
    }


    cout<< dis;

}
