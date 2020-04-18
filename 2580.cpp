#include <iostream>

using namespace std;

int map[9][9];
bool row[9][9];
bool col[9][9];
bool square[9][9];

void dfs(int cnt) {
	int x = cnt / 9;
	int y = cnt % 9;

	if (cnt == 81) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << map[i][j] << " ";
			}
			cout << "\n";
		}
		return;
	}

	if (map[x][y] == 0) {
		for (int i = 1; i <= 9; i++) {
			if (row[x][i] == false && col[y][i] == false && square[(x / 3) * 3 + (y / 3)][i] == false) {
				row[x][i] = true;
				col[y][i] = true;
				square[(x / 3) * 3 + (y / 3)][i] = true;
				map[x][y] = i;
				dfs(cnt + 1);
				map[x][y] = 0;
				row[x][i] = false;
				col[y][i] = false;
				square[(x / 3) * 3 + (y / 3)][i] = false;
			}
		}
	}
	else dfs(cnt + 1);
}

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> map[i][j];
			if (map[i][j] != 0) {
				row[i][map[i][j]] = true;
				col[j][map[i][j]] = true;
				square[(i / 3) * 3 + (j / 3)][map[i][j]] = true;
			}
		}
	}

	dfs(0);

	return 0;
}