#include <iostream>
using namespace std;

int main(void) {
	int price;
	int coin[] = { 500, 100, 50, 10, 5, 1 };
	int change = 0;

	cin >> price;

	price = 1000 - price;

	for (int i = 0; i < 6 && price>0; i++) {
		while (price >= coin[i]) {
			price -= coin[i];
			change += 1;
		}
	}
	cout << change;
}