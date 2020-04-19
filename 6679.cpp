#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int sum10 = 0, sum12 = 0, sum16 = 0;

	for (int i = 1000; i < 10000; i++) {
		sum10 = 0;
		sum12 = 0;
		sum16 = 0;

		for (int j = i; j >= 1; j /= 10) sum10 += j % 10;
		for (int k = i; k >= 1; k /= 12) sum12 += k % 12;
		for (int l = i; l >= 1; l /= 16) sum16 += l % 16;

		if (sum10 == sum12 && sum10 == sum16)
			cout << i << "\n";
	}

	return 0;
}