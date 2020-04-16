#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

int k, select_Num;
int map[13];
bool visit[13];

vector<int> v;

void initialize() {
	v.clear();
	select_Num = 6;
	memset(map, 0, sizeof(map));
	memset(visit, false, sizeof(visit));
}

void select(int idx, int cnt) {
	if (cnt == select_Num) {
		sort(v.begin(), v.end());
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << "\n";
	}

	for (int i = idx; i < k; i++) {
		if (visit[i] == true) continue;
		visit[i] = true;
		v.push_back(map[i]);
		select(i, cnt + 1);
		visit[i] = false;
		v.pop_back();
	}
}

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	while (1) {
		initialize();

		cin >> k;

		if (k == 0) break;

		for (int i = 0; i < k; i++) {
			cin >> map[i];
		}
		select(0, 0);
		cout << "\n";
	}

	return 0;
}