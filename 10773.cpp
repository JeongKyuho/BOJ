#include <iostream>
#include <stdio.h>

int main(void) {
	int K, sum = 0, zCount = 0, i = 0;

	scanf_s("%d", &K);

	int *arr = new int[K];

	for (; K > 0; K--) {
		int price;

		scanf_s("%d", &price);

		if (price != 0) {
			arr[i] = price;
			sum += arr[i];
			i++;
		}
		else {
			sum -= arr[i - 1];
			arr[i - 1] = 0;
			i--;
		}
	}

	printf("%d\n", sum);

	delete arr;

	return 0;
}