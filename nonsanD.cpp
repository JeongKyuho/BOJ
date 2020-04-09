#include <iostream>
#include <math.h>

using namespace std;

int n;
int arr[262144] = { 0 };
int levelCount;
int pumpCount = 0;
int pump[262144] = { 0 };
int oil = 0;

int getTime() {
	int time = 0;
	int i = 1;

	while (arr[1] != 0) {
		if (pow(2, levelCount - 1) <= i && i <= n && pump[i] == 0) {
			if (oil == 0) {
				pumpCount++;
				pump[i] = 1;
			}
			else {
				pump[i] = 1;
				pumpCount++;
				arr[i]--;
				oil--;
			}
		}
		if (oil == 0) {
			oil += pumpCount;
			time++;
		}
		if (arr[i * 2] != 0 || arr[i * 2 + 1] != 0) {
			if (arr[i * 2] != 0 && arr[i * 2 + 1] == 0) i = i * 2;
			else if (arr[i * 2] == 0 && arr[i * 2 + 1] != 0) i = i * 2 + 1;
			else if (arr[i * 2] > arr[i * 2 + 1]) i = i * 2 + 1;
			else i = i * 2;
		}
		else {
			if (arr[i] != 0) {
				if (arr[i] < oil) {
					oil -= arr[i];
					arr[i] = 0;
				}
				else {
					arr[i] -= oil;
					oil = 0;
				}
			}
			else i /= 2;
		}
	}

	return time;
}


int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin >> n;

	for (int i = 1; i < n + 1; i++) {
		cin >> arr[i];
	}

	levelCount = sqrt(n + 1);
	int result = getTime();

	cout << result << "\n";

	return 0;
}