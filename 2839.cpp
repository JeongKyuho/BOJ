#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int N;

	scanf_s("%d", &N);

	int n3 = 0;
	int n5 = 0;

	while (N % 5 != 0 && N >= 0) {
		N -= 3;
		n3++;
	}

	if (N < 0) printf("-1\n");
	else {
		n5 = N / 5;
		printf("%d\n", n3 + n5);
	}

	return 0;
}