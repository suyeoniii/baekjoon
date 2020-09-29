#include <iostream>

using namespace std;

int main(){
	int N,K;
	int answer = 0;
	int temp = 0;

	cin>>N>>K;
	int *arr = new int[N];

	for(int i = 0;i<N;i++){
		cin>>arr[i];
	}

	for(int j = N-1;j>=0;j--){
		if(K<arr[j]){
			continue;
		}
		else if(K==arr[j]){
			answer+=1;
			break;
		}
		else if(K>arr[j])
		{	
			temp = K/arr[j];
			K-=arr[j]*temp;
			answer+=temp;
			continue;
		}
	}
	cout<<answer;
}
