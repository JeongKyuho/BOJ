#include <iostream>

using namespace std;

int arr[501][501] = { 0 };
int dp[501][501] = { 0 };
int n = 0, max = 0;

int Max(int a, int b) {
	return a > b ? a : b;
}

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin >> n;

	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < i + 1; j++) {
			cin >> arr[i][j];
		}
	}

	dp[1][1] = arr[1][1];

	for (int i = 2; i < n + 1; i++) {
		for (int j = 1; j < i + 1; j++) {
			dp[i][j] += Max(arr[i][j] + dp[i - 1][j], arr[i][j] + dp[i - 1][j - 1]);
		}
	}

	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < i + 1; j++) {
			if (dp[i][j] > max) max = dp[i][j];
		}
	}

	cout << max << "\n";

	return 0;
}