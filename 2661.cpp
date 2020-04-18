#include <iostream>
#include <string>

using namespace std;

int N, a[3] = { 1, 2, 3 }, arr[81];
string str = "";
bool check = false;

void backTracking(int k) {
	str = "";
	for (int i = 0; i < k; i++) {
		str += (arr[i] + '0');
	}

	for (int i = 1; i <= k / 2; i++) {
		for (int j = 0; j <= k - 2 * i; j++) {
			if (str.substr(j, i) == str.substr(j + i, i)) {
				return;
			}
		}
	}

	if (k == N) {
		for (int i = 0; i < k; i++) {
			cout << arr[i];
		}
		exit(0);
	}

	for (int i = 0; i < 3; i++) {
		arr[k] = a[i];
		backTracking(k + 1);
		if (check) return;
	}
}

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin >> N;

	backTracking(0);

	return 0;
}