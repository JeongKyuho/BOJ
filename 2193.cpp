#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	long long dp[91];

	cin >> n;

	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i < n + 1; i++) {
		dp[i] = dp[i - 2] + dp[i - 1];
	}

	cout << dp[n] << "\n";

	return 0;
}