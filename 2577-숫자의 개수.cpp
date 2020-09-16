#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int A, B, C;
    int mul;
    vector<int> ans;

    cin >> A >> B >> C;
    mul = A * B * C;

    for (int i = 0; i <= 9; i++) {
        int answer = 0;
        for (int j = 1;mul/j>0; j*=10) {
            if (i == mul % (j*10)/j){
                answer+=1;
            }
        }
        ans.push_back(answer);
    }
    for (int i = 0; i <ans.size(); i++) {
        cout << ans[i] << "\n";
    }

}
