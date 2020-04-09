#include <iostream>
#include <string.h>
using namespace std;

int map[100][100] = { 0 };
bool visited[100] = { false };
int n;

void dfs(int j) {
	for (int k = 0;k < n;k++) {
		if (map[j][k] && !visited[k]) {
			visited[k] = true;
			dfs(k);
		}
	}
}
int main() {

	cin >> n;

	for (int i = 0;i < n;i++)
		for (int j = 0;j < n;j++)
			scanf("%d", &map[i][j]);

	for (int i = 0;i < n;i++) {
		memset(visited, 0, sizeof(visited));
		dfs(i);

		for (int j = 0;j < n;j++) {
			if (visited[j])
				map[i][j] = 1;
		}
	}

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++)
			cout << map[i][j] << " ";

		cout << endl;
	}
	return 0;
}