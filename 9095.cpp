#include <iostream>
#include <string.h>

using namespace std;

int getResult(int input) {
	int result;
	if (input == 1) return 1;
	else if (input == 2) return 2;
	else if (input == 3) return 4;
	else return getResult(input - 1) + getResult(input - 2) + getResult(input - 3);
}

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int T;

	cin >> T;

	for (; T > 0; T--) {
		int n;
		cin >> n;

		printf("%d\n", getResult(n));
	}

	return 0;
}