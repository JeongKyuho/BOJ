#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int T, sum = 0;
	string S;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> S;

		int arr[26];

		memset(arr, 0, 26 * sizeof(int));

		for (int j = 0; j < S.size(); j++) {
			if (arr[S[j] - 65] == 0) arr[S[j] - 65] = 1;
			else continue;
		}

		for (int j = 0; j < 26; j++) {
			if (arr[j] == 0) sum += j + 65;
		}

		cout << sum << "\n";

		sum = 0;
	}

	return 0;
}