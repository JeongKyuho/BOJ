#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {

	int N;

	cin >> N;

	vector<vector<int> > v(N, vector<int> (2));

	for (int i = 0;i < N;i++) {
		cin >> v[i][1] >> v[i][0];
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++) {
		cout << v[i][1] << " " << v[i][0];
		cout << "\n";
	}

	return 0;
}