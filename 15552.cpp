#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void) {
	int T;

	scanf_s("%d", &T);

	int *arr = new int[T];

	for (int i = 0;i < T;i++) {
		int A, B;

		scanf_s("%d %d", &A, &B);

		arr[i] = A + B;
	}

	for (int i = 0;i < T;i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}