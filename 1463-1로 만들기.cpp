#include <iostream>
using namespace std;

int main(){
	int N = 0;
	int num = 2;
	int temp;
	cin>>N;
	int *arr = new int[N+1];
	
	arr[0] = 0;
	arr[1] = 0;

	while(num<=N){
		temp = num;
		if(num%3==0){
			if(temp>arr[num/3])
			temp = arr[num/3];
		}
		if(num%2==0){
			if(temp>arr[num/2])
			temp = arr[num/2];
		}
			if(temp>arr[num-1])
			temp = arr[num-1];
		
		arr[num] = temp+1;
		num+=1;
	}
	cout<<arr[N];
}
