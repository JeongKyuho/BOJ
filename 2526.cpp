#include <iostream>
#include <stdio.h>

int main(void) {
	int N, P;
	int arr[100];
	int i = 1, flag = 0;

	scanf("%d %d", &N, &P);

	arr[0] = N;

	while (true) {
		arr[i] = arr[i - 1] * N % P;

		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j]) {
				printf("%d\n", i - j);
				flag = 1;
				break;
			}
		}

		if (flag == 1) break;

		i++;
	}
}