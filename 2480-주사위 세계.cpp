#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int ans = 0;
	int same = 0;
	int num = 0;

	if (a==b) {
		same +=1;
		num = a;
	}
	if(b==c) {
		same += 1;
		num = b;
	}
	if(c==a) {
		same += 1;
		num = c;
	}

	if (same==3) {
		ans = 10000 + num * 1000;
	}
	else if (same==1) {
		ans = 1000 + num * 100;
	}
	else if(same==0){
		ans = max(max(a, b),max(b, c));
		ans *= 100;
	}
	cout << ans;
}