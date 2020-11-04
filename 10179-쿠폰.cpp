#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    cout << fixed;
    cout.precision(2);

    for(int i = 0;i<N;i++){
        double price;
        cin>>price;

        price = price-price*0.2;

        cout<<"$"<<price<<"\n";
    }
}