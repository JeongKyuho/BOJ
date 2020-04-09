#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int N;

void merge(int a[], int left, int mid, int right) {
	int i, j, k;

	i = left;
	j = mid + 1;
	k = left;

	int *tmp_arr = new int[N];

	// left ���� mid ������ ��ϰ� mid + 1 ���� right ������ ����� ���� ��
	while (i <= mid && j <= right) {
		if (a[i] <= a[j]) {
			tmp_arr[k] = a[i];
			i++;
		}
		else {
			tmp_arr[k] = a[j];
			j++;
		}
		k++;
	}

	// left ����� ���� �� ó���Ǿ�����, right ����� index�� ���� �ִ� ���
	// right ����� ���� �κ��� ���������� tmp_arr�� ����
	if (i > mid) {
		for (int m = j; m <= right; m++) {
			tmp_arr[k] = a[m];
			k++;
		}
	}
	// left ����� ���� �κ��� ���������� tmp_arr�� ����
	else {
		for (int m = i; m <= mid; m++) {
			tmp_arr[k] = a[m];
			k++;
		}
	}

	// �ӽ� �迭�� tmp_arr�� ���� ���� �迭�� �����Ѵ�.
	for (int m = left; m <= right; m++) {
		a[m] = tmp_arr[m];
	}

	delete tmp_arr;
}

void merge_sort(int a[], int left, int right) {
	int mid;

	if (left < right) {
		// �������� ������ ���� �߰� ��ġ ã��
		mid = (left + right) / 2;

		// ����
		merge_sort(a, left, mid);
		merge_sort(a, mid + 1, right);

		// �պ�
		merge(a, left, mid, right);
	}
}

int main(void) {
	scanf_s("%d", &N);

	int *arr = new int[N];

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &arr[i]);
	}

	merge_sort(arr, 0, N - 1);

	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}
}