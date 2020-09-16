#include <iostream>
using namespace std;

int main(void) {
    int N;
    int min = 1000000;
    int max = -1000000;

    cin >> N;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        if (a < min) {
            min = a;
        }
        if (a > max) {
            max = a;
        }
    }
    cout << min <<' '<< max;
}
