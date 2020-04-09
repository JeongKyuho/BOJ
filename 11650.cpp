#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	
	int N;

	cin >> N;

	vector<vector<int> > v(N, vector<int>(2));

	for (int i = 0 ;i < N ;i++) {
		cin >> v[i][0] >> v[i][1];
	}

	sort(v.begin(), v.end());

	for (vector<int> vec : v) {
		for (int s : vec) {
			cout << s << " ";
		}
		cout << "\n";
	}

	return 0;
}