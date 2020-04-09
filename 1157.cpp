#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void getMax(int *count, int *max, int *maxCount, int *maxValue) {

	for (int i = 0; i < 26; i++) {
		if (count[i] > *max) {
			*max = count[i];
			*maxValue = i;
			*maxCount = 0;
		}
		else if(count[i] == *max) {
			*maxCount += 1;
		}
	}
}

int main(void) {
	char arr[1000001] = { '\0' };
	int count[26] = { 0 };
	int max = 0, maxCount = 0, maxValue = 0;

	memset(arr, '\0', sizeof(arr));
	memset(count, 0, sizeof(count));

	cin >> arr;

	for (int i = 0; arr[i] != '\0'; i++) {
		if (arr[i] > 64 && arr[i] < 91) {
			count[arr[i] - 65]++;
		}
		else if (arr[i] > 96 && arr[i] < 123) {
			count[arr[i] - 97]++;
		}
	}

	getMax(count, &max, &maxCount, &maxValue);

	if (maxCount != 0)
		printf("?\n");
	else
		printf("%c", maxValue + 65);
}