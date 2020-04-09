#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	string S;
	int result[5] = { 0, 0, 0, 0, 0 };
	int falseCount = 0;

	for (int i = 0; i < 5; i++) {
		cin >> S;

		for (int j = 0; j < S.size(); j++) {
			if (S.substr(j, 3) == "FBI") {
				result[i] = 1;
				break;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		if (result[i] == 1)	cout << i + 1 << " ";
		else falseCount++;
	}

	if (falseCount == 5) {
		cout << "HE GOT AWAY!";
	}

	return 0;
}