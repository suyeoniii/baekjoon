#include <iostream>

using namespace std;

int main() {
	int Ax, Ay, Az, Cx, Cy, Cz;
	cin >> Ax >> Ay >> Az >> Cx >> Cy >> Cz;

	cout << Cx - Az << " " << Cy / Ay << " " << Cz - Ax;
}