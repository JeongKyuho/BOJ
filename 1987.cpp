#include <iostream>
#include <algorithm>

using namespace std;

int r, c;
char map[20][20];
int visited[26];
int result = 0;

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void dfs(int x, int y, int cnt) {
	result = max(result, cnt);

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && ny >= 0 && nx < r && ny < c) {
			if (visited[map[nx][ny] - 'A'] == 0) {
				visited[map[nx][ny] - 'A'] = 1;
				dfs(nx, ny, cnt + 1);
				visited[map[nx][ny] - 'A'] = 0;
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin >> r >> c;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> map[i][j];
		}
	}

	visited[map[0][0] - 'A'] = 1;

	dfs(0, 0, 1);

	cout << result;

	return 0;
}