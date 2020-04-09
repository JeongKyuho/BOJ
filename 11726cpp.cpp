#include <iostream>
#include <string.h>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;

	cin >> n;

	int *arr = new int[n];

	arr[0] = 1;
	arr[1] = 2;

	for (int i = 2; i < n; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
	}

	cout << arr[n - 1] << "\n";

	return 0;
}