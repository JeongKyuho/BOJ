#include <iostream>
#include <string.h>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int N, max = 1;
	int A[1001], dp[1001];

	cin >> N;

	for (int i = 1; i < N + 1; i++) {
		cin >> A[i];
	}

	dp[0] = 0;

	for (int i = 1; i < N + 1; i++) {
		int min = 0;
		for (int j = 0; j < i; j++) {
			if (A[i] > A[j]) {
				if (min < dp[j]) min = dp[j];
			}
		}
		dp[i] = min + 1;
		if (dp[i] > max)
			max = dp[i];
	}

	cout << max << "\n";

	return 0;
}