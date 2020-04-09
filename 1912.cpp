#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int arr[100001] = { 0 };
	int dp[100001] = { 0 };
	int max = -1001;
	int n;

	cin >> n;

	for (int i = 1; i < n + 1; i++) {
		cin >> arr[i];
	}

	dp[1] = arr[1];

	for (int i = 2; i < n + 1; i++) {
		if (dp[i - 1] > 0) dp[i] = arr[i] + dp[i - 1];
		else dp[i] = arr[i];
	}

	for (int i = 1; i < n + 1; i++) {
		if (dp[i] > max) max = dp[i];
	}

	cout << max << "\n";

	return 0;
}