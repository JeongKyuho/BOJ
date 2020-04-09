#include <iostream>
#include <stdlib.h>

using namespace std;

int getResult(int N, int M) {
	int result = 1;

	if (N == M)
		result = 1;
	else {
		for (int i = 1; i < N + 1; i++) {
			result *= M;
			M -= 1;
			result /= i;
		}
	}

	return result;
}

int main(void) {
	int T;

	cin >> T;

	for (; T > 0; T--) {
		int N, M;

		cin >> N >> M;

		cout << getResult(N, M) << endl;
	}
}