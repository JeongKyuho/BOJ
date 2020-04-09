#include <iostream>
#include <stdio.h>

int REV(int num) {
	int result = 0;
	int arr[4] = { 0, 0, 0, 0 };
	int j = 0, pow = 1;

	for (int i = 0; num >= 1; i++, num /= 10) arr[i] = num % 10;
	
	for (int i = 3; arr[i] == 0; i--) j++;

	for (j = 3 - j; j >= 0; j--, pow *= 10) result += arr[j] * pow;

	return result;
}

int main(void) {
	int X, Y;

	scanf("%d %d", &X, &Y);

	printf("%d", REV(REV(X) + REV(Y)));

	return 0;
}