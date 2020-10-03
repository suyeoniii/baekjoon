#include <iostream>
#include <string>

using namespace std;

int main()
{
	int month;
	int date;
	cin >> month >> date;
	string day[] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
	int month_day[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	int count = 0;
	for (int i = 0; i < month - 1; i++)
	{
		count += month_day[i];
	}
	count += date;
	count = count % 7;
	if (count == 0)
		cout << day[6];
	else
		cout << day[count - 1];

}