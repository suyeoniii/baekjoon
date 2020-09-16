#include <iostream>
#include <vector>
using namespace std;

//입력받은 수만큼 문자출력
int main() {
	int T;
	cin >> T;
	vector<string> ans;
	
	for (int i = 0; i < T; i++) {
		int a;
		string s;
		string answer = "";
		cin >> a >> s;

		for (int j = 0; j < s.length(); j++) {
			for (int k = 0; k < a; k++) {
				answer += s[j];
			}
		}
		ans.push_back(answer);
	}
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}
}