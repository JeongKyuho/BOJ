#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int dp[1010] = {};
	int n;

	dp[0] = 1; 
	dp[1] = 1;

	cin >> n;

	for (int i = 2; i <= n; i++)
		dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;

	cout << dp[n] % 10007 << "\n";

	return 0;
}