#include <iostream>
#include <queue>

using namespace std;

int N, M;
int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
int maze[101][101] = { 0 };
queue<pair<int, int>> q;

void bfs() {
	int x, y;
	pair<int, int> cur;

	q.push(make_pair(0, 0));

	while (!q.empty()) {
		cur = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			x = cur.second + dir[i][0];
			y = cur.first + dir[i][1];
			if (0 <= x && x <= M && 0 <= y && y <= N && maze[y][x] == 1) {
				q.push(make_pair(y, x));
				maze[y][x] = maze[cur.first][cur.second] + 1;
			}
		}
	}

	return;
}

int main(void) {
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%1d", &maze[i][j]);
		}
	}

	bfs();

	cout << maze[N - 1][M - 1];

	return 0;
}