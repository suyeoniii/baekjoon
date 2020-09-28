#include <iostream>
#include <list>

using namespace std;

int main() {
	string str;
	int N;

	cin >> str >> N;

	char ch;
	list<char> li(&str[0], &str[str.length()]);
	list<char>::iterator it;
	
	for (it = li.begin(); it != li.end();it++) {	
	}

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		if (s == "L") {
			if (it != li.begin()){
				it--;
			}
		}
		else if (s == "D") {
			if (it != li.end()) {
				it++;
			}
		}
		else if (s == "B") {
			if (it != li.begin()) {
				it = li.erase(--it);
			}
		}
		else if (s == "P") {
			cin >> ch;
			li.insert(it, ch);
		}
	}
	for (it = li.begin(); it != li.end(); it++) {
		cout << *it;
	}
}