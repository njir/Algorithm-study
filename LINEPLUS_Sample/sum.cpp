#include <iostream>
#include <vector>
using namespace std;

int solve(const vector<int>& data) {
	// TODO implement your solution to here.
	int sum = 0;
	for (int i = 0; i < data.size(); i++) {
		sum += data[i];
	}
	
	return sum;
}

int main() {
	int N, temp;
	vector<int> data;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		data.push_back(temp);
	}
	cout << solve(data) << endl;
	return 0;
}
