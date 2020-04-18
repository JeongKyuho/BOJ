#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	bool arr[10001] = { false };
	int num;

	for (int i = 1; i < 10001; i++) {

		num = i;

		for (int j = i; j >= 1;) {
			num = num + (j % 10);
			j /= 10;
		}

		if(num < 10001) arr[num] = true;
	}

	for (int i = 1; i < 10001; i++) {
		if (arr[i] == false) cout << i << "\n";
	}

	return 0;
}