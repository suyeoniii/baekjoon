#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	double ave = 0.0;
	vector<double> vin;

	cin >> N;

	for (int i = 0; i < N; i++) {
		double score;
		cin >> score;
		vin.push_back(score);
	}

	int max = *max_element(vin.begin(), vin.end());

	for (int i = 0; i < vin.size(); i++) {
		ave += vin[i] / max * 100;
	}

	ave = ave / vin.size();

	cout << ave;
}