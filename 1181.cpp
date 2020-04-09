#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int N;

	cin >> N;

	vector<string> v;

	for (int i = 0; i < N; i++) {
		string s;

		cin >> s;

		if (!(find(v.begin(), v.end(), s) != v.end()))	v.push_back(s);
	}

	sort(v.begin(), v.end(), [](string a, string b)
	{
		int lenA = a.length(), lenB = b.length();

		if (lenA == lenB)
		{
			int iter = -1;
			while (iter < lenA)
			{
				iter++;

				if (a[iter] == b[iter])	continue;
				else return a[iter] < b[iter];
			}
		}
		else return lenA < lenB;
	});

	for (auto s : v) {
		cout << s << "\n";
	}

	return 0;
}