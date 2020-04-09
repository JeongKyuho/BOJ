#include <iostream>
#include <stdio.h>
#include <math.h>

int main(void) {
	int first, second, temp, N;

	scanf("%d %d %d", &first, &second, &N);

	int *arr = new int[N];

	for (int i = 0; i < N; i++) {
		int question;

		scanf("%d", &question);

		if (question == 0) arr[0] = first;
		else if (question == 1) arr[1] = second;
		else {
			for (int i = 2; i < question + 1; i++) {
				arr[i] = abs(arr[i-2] - arr[i-1]);
			}
		}

		printf("%d\n", arr[question]);
	}

	return 0;
}