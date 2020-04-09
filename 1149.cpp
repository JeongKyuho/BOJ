#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int N, dp[1001][3], map[1001][3];
	int result;

	cin >> N;

	for (int i = 1; i < N + 1; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> map[i][j];
		}
	}

	dp[0][0] = dp[0][1] = dp[0][2] = 0;
	map[0][0] = map[0][1] = map[0][2] = 0;

	for (int i = 1; i < N + 1; i++) {
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + map[i][0];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + map[i][1];
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + map[i][2];
	}

	result = min(dp[N][0], min(dp[N][1], dp[N][2]));

	cout << result << "\n";

	return 0;
}