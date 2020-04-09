#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void) {
	int X, count = 0, diff, temp, flag = 0;

	cin >> X;

	for (int i = 1; i < X + 1; i++) {
		if (i < 100)
			count++;
		else {
			diff = (i % 10) - (i / 10 % 10);
			for (int j = i / 10; j > 9; j /= 10) {
				if (diff != (j % 10) - (j / 10 % 10)) {
					flag = 1;
					break;
				}
			}
			if (flag == 1) {
				flag = 0;
				continue;
			}
			else
				count++;
		}
	}

	cout << count;

	return 0;
}