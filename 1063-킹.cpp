#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int arr[6];

    for(int i = 0; i<5; i++){
        int n;
        cin>>n;

        arr[i] = n;
    }

    int count = 0;
    while(count != 4){
        count = 0;
        for(int i = 0; i<4; i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i], arr[i+1]);
                for(int j = 0; j<5; j++){
                    cout<<arr[j]<<" ";
                }
                cout<<"\n";
            }
        }

        for(int i = 0; i<4; i++){
            if(arr[i]<arr[i+1]){
                count += 1;
            }
        }
    }

}
