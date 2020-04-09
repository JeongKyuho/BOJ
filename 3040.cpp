#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[9];
	int sum = 0;
	int diff = 0;

	for (int i = 0; i < 9; i++) {
		scanf_s("%d", &arr[i]);
		sum += arr[i];
	}

	diff = sum - 100;

	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (arr[i] + arr[j] == diff) {
				arr[i] = 0;
				arr[j] = 0;
				diff = -1;
				break;
			}
		}
		if (diff == -1)
			break;
	}

	for (int i = 0; i < 9; i++) {
		if (arr[i] != 0) {
			printf("%d\n", arr[i]);
		}
	}

	return 0;
}