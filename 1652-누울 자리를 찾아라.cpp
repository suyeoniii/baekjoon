#include <iostream>
#include <vector>
#include <map>
#include <utility>

using namespace std;

int main(){
    int N;
    cin>>N;
    int row = 0, col = 0;

    char arr[101][101];
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i<N; i++){
        int cont = 0;
        for(int j = 0; j<N; j++){
            if(arr[i][j]=='.'){
                if(cont == 1){
                    row++;
                }
                cont += 1;
            }
            else{
                cont = 0;
            }
        }
    }
    for(int i = 0; i<N; i++){
        int cont = 0;
        for(int j = 0; j<N; j++){
            if(arr[j][i]=='.'){
                if(cont == 1){
                    col++;
                }
                cont += 1;
            }
            else{
                cont = 0;
            }
        }
    }
    cout<<row<<" "<<col;

}
