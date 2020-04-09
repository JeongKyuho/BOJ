#include <iostream>

using namespace std;

int N;
int u[1000000] = { -1 }, v[1000000] = { -1 };
int result = 0;
int zeroCount = 0;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> u[i] >> v[i];
	}

	for (int i = 1; i < N; i++) {
		if (u[1] > u[0] || v[1] < v[0]) {
			result = -1;
			break;
		}

		if()
	}

	return 0;
}