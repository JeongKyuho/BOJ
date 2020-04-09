#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(void) {
	int N;
	int arr[10000] = { 0 };

	scanf_s("%d", &N);

	memset(arr, 0, sizeof(arr));

	for (int i = 0; i < N; i++) {
		int num;

		scanf_s("%d", &num);

		arr[num-1]++;
	}

	for (int i = 0; i < 10000; i++) {
		if (arr[i] != 0) {
			while (arr[i] != 0) {
				printf("%d\n", i+1);
				arr[i]--;
			}
		}
		else
			continue;
	}

	return 0;
}