#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int N, M;
	long count = 0;
	long result = 0;

	cin >> N >> M;

	if (N == 1) result = M % 998244353;
	else if (N == 2)	result = M * M % 998244353;
	else {
		for (int i = 1; i <= M; i++) {
			for (int j = 1; j <= M; j++) {
				for (int k = 1; k <= M; k++) {
					if (i >= j || j <= k)  count = (count + 1) % 998244353;
				}
			}
		}
		result = count * (N - 2) % 998244353;
	}
	cout << result << "\n";

	return 0;
}