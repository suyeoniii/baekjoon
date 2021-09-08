#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    int answer1 = N-N*(0.22);
    int answer2 = N-(N*(0.2)*(0.22));

    cout<<answer1<<" "<<answer2;
}

