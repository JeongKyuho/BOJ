#include <iostream>

using namespace std;

int n, m, k;
int board[42][42];
int r, c;
int paper[12][12];

void rotate() {
	int tmp[12][12];

	for (int i = 0; i < r; i++) 
		for (int j = 0; j < c; j++) 
			tmp[i][j] = paper[i][j];
		
	for (int i = 0; i < c; i++)
		for (int j = 0; j < r; j++)
			paper[i][j] = tmp[r - 1 - j][i];

	swap(r, c);
}

bool paste_check() {
	for (int x = 0; x <= n - r; x++) {
		for (int y = 0; y <= m - c; y++) {
			bool pastable = true;
			for (int i = 0; i < r; i++) {
				if (!pastable) break;
				for (int j = 0; j < c; j++) {
					if (board[x + i][y + j] == 1 && paper[i][j] == 1) {
						pastable = false;
						break;
					}
				}
			}
			if (!pastable) continue;

			for (int i = 0; i < r; i++) {
				for (int j = 0; j < c; j++) {
					if (paper[i][j] == 1)
						board[x + i][y + j] == 1;
				}
			}
			return true;
		}
	}
	return false;
}

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin >> n >> m >> k;

	while (k--) {
		cin >> r >> c;
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				cin >> paper[i][j];
		if (paste_check()) continue;
		rotate();
		if (paste_check()) continue;
		rotate();
		if (paste_check()) continue;
		rotate();
		if (paste_check()) continue;
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cnt += board[i][j];

	cout << cnt << "\n";

	return 0;
}