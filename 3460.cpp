#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t, n;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; n >= 1; j++) {
			if (n % 2 == 1) {
				cout << j << " ";
			}
			n /= 2;
		}

		cout << "\n";
	}

	return 0;
}