#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    vector<int> v;
    vector<int> ans;

    for (int i = 0; i < 10; i++) {
        int a;
        cin >> a;
        v.push_back(a % 42);
    }
    sort(v.begin(), v.end());
    ans.push_back(-1);

    for (int i = 0; i < v.size(); i++) {
        if (v[i]!=ans[ans.size()-1]) {
            ans.push_back(v[i]);
        }
    }
    cout << ans.size() - 1;

}
