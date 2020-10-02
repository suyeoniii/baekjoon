#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(string S)
{
	vector<int> v(26, -1);
	for (int i = 0; i < S.length(); i++)
	{
		if (v[S[i] - 97] == -1)
			v[S[i] - 97] = i;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << v[i] << ' ';

	}
	return v;
}


int main()
{
	string S;
	cin >> S;
	solution(S);


}