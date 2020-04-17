#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int l, c;
char alphabat[15];
vector<char> vowel;
vector<char> consonant;
vector<string> result;
map<string, bool> visited;

void password(int idx1, int idx2, int vCnt, int cCnt, string s) {
	if (s.length() == l && vCnt >= 1 && cCnt >= 2) {
		sort(s.begin(), s.end());
		if (!visited.count(s)) {
			visited[s] = true;
			result.push_back(s);
		}
		return;
	}

	if (s.length() == l)
		return;

	for (int i = idx1 + 1; i < vowel.size(); i++) 
		password(i, idx2, vCnt + 1, cCnt, s + vowel[i]);
	for (int i = idx2 + 1; i < consonant.size(); i++) 
		password(idx1, i, vCnt, cCnt + 1, s + consonant[i]);
}

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin >> l >> c;

	for (int i = 0; i < c; i++) {
		cin >> alphabat[i];
		if (alphabat[i] == 'a' || alphabat[i] == 'e' || alphabat[i] == 'i' || alphabat[i] == 'o' || alphabat[i] == 'u')
			vowel.push_back(alphabat[i]);
		else
			consonant.push_back(alphabat[i]);
	}

	sort(vowel.begin(), vowel.end());
	sort(consonant.begin(), consonant.end());

	password(-1, -1, 0, 0, "");

	sort(result.begin(), result.end());
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << "\n";
	}

	return 0;
}