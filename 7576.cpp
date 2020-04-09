#include <iostream>
#include <queue>

using namespace std;

int N, M;
int cnt = 0;
int map[1000][1000];
bool visited[1000][1000];
queue<pair<pair<int, int>, int>> q;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void bfs() {
	while (!q.empty()) {
		int x = q.front().first.first;
		int y = q.front().first.second;
		cnt = q.front().second;

		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (0 <= nx && nx < M && 0 <= ny && ny < N) {
				if (map[nx][ny] == 0 && !visited[nx][ny]) {
					visited[nx][ny] = true;
					q.push(make_pair(make_pair(nx, ny), cnt + 1));
				}
			}
		}
	}
}

void check() {
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N;j++) {
			if (map[i][j] == 0 && !visited[i][j]) {
				cnt = -1;
				break;
			}
		}
		if (cnt == -1) break;
	}
}

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin >> N >> M;

	for(int i = 0 ; i < M ; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
			if (map[i][j] == 1) {
				visited[i][j] = true;	
				q.push(make_pair(make_pair(i, j), 0));
			}
		}
	}

	bfs();
	check();

	cout << cnt << "\n";

	return 0;
}