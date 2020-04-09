#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int N, K;

	cin >> N >> K;

	vector<int> v(N);

	for (int i = 0;i < N;i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	cout << v[K - 1];

	return 0;
}