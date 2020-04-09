#include <iostream>
#include <stdio.h>
#include <string.h>

int main(void) {
	int M, N;
	int sum = 0;

	scanf_s("%d %d", &M, &N);

	int *arr = new int[N + 1];

	memset(arr, 0, (N + 1) *sizeof(int));

	for (int i = 2; i < N + 1; i++) {
		arr[i] = i;
	}

	for (int i = 2; i < N + 1; i++) {
		if (arr[i] == 0) continue;
		for (int j = i + i; j < N + 1; j += i) {
			arr[j] = 0;
		}
	}

	for (int i = M; i < N + 1; i++) {
		if (arr[i] != 0) sum += arr[i];
	}

	if (sum == 0) printf("-1\n");
	else {
		printf("%d\n", sum);

		for (int i = M; i < N + 1; i++) {
			if (arr[i] != 0) {
				printf("%d\n", arr[i]);
				break;
			}
		}
	}

	delete arr;

	return 0;
}