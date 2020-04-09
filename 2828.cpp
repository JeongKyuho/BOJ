#include <iostream>
#include <stdio.h>
#include <string.h>

int main(void) {
	int N, M, J;
	int count = 0;
	int loc;

	scanf_s("%d %d %d", &N, &M, &J);

	loc = M;

	for (;J > 0;J--) {
		int num;

		scanf_s("%d", &num);

		if (num <= loc && num >= loc - (M - 1)) continue;
		else if (num > loc) {
			count += num - loc;
			loc = loc + (num - loc);
		}
		else {
			count += (loc - (M - 1)) - num;
			loc = loc - ((loc - (M - 1)) - num);
		}
	}
	printf("%d\n", count);

	return 0;
}