#include <iostream>

using namespace std;

int n;
int dp[10001] = { 0 };
int grape[10001] = { 0 };

int max(int a, int b, int c) {
	return a > b ? (a > c) ? a : c : (b > c) ? b : c;
}

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin >> n;

	for (int i = 1; i < n + 1; i++) {
		cin >> grape[i];
	}

	dp[1] = grape[1];
	dp[2] = grape[1] + grape[2];
	
	if (n > 2) {
		for (int i = 3; i < n + 1; i++) {
			dp[i] = max(dp[i - 1], dp[i - 2] + grape[i], dp[i - 3] + grape[i - 1] + grape[i]);
		}
	}

	cout << dp[n];

	return 0;
}