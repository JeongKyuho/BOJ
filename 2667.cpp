#include <iostream>
#include <queue>

using namespace std;

int map[25][25];
bool visited[25][25];
int N;
int cnt = 0;
int houseCount[324];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void bfs(int y, int x) {
	queue<pair<int, int>> q;
	q.push(make_pair(y, x));

	visited[y][x] = true;
	houseCount[cnt]++;

	while (!q.empty()) {
		y = q.front().first;
		x = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (0 <= nx && nx < N && 0 <= ny && ny < N) {
				if (map[ny][nx] == 1 && visited[ny][nx] == false) {
					visited[ny][nx] = true;

					houseCount[cnt]++;

					q.push(make_pair(ny, nx));
				}
			}
		}
	}
}

int main(void) {

	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N;j++) {
			scanf("%1d", &map[i][j]);
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 1 && visited[i][j] == false) {
				cnt++;

				bfs(i, j);
			}
		}
	}
	
	sort(houseCount + 1, houseCount + cnt + 1);

	cout << cnt << "\n";

	for (int i = 1; i < cnt + 1; i++) {
		cout << houseCount[i] << "\n";
	}

	return 0;
} 