#include <iostream>
#include <stdio.h>

int main(void) {
	int T;

	scanf_s("%d", &T);

	for (;T > 0; T--) {
		int a, b;
		int price = 0;

		scanf_s("%d %d", &a, &b);

		if (a == 1) price += 5000000;
		else if (a > 1 && a < 4) price += 3000000;
		else if (a > 3 && a < 7) price += 2000000;
		else if (a > 6 && a < 11) price += 500000;
		else if (a > 10 && a < 16) price += 300000;
		else if (a > 15 && a < 22) price += 100000;

		if (b == 1) price += 5120000;
		else if (b > 1 && b < 4) price += 2560000;
		else if (b > 3 && b < 8) price += 1280000;
		else if (b > 7 && b < 16) price += 640000;
		else if (b > 15 && b < 32) price += 320000;

		printf("%d\n", price);
	}

	return 0;
}