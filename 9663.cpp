#include <iostream>

using namespace std;

int N;
int col[15];
int result = 0;

bool promising(int i) {
	for (int j = 0; j < i; j++) {
		if (col[j] == col[i] || abs(col[i] - col[j]) == i - j) return false;
	}
	return true;
}

void N_Queen(int i) {
	if (i == N) result += 1;
	else {
		for (int j = 0; j < N; j++) {
			col[i] = j;
			if (promising(i)) N_Queen(i + 1);
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin >> N;

	N_Queen(0);

	cout << result << "\n";
	return 0;
}