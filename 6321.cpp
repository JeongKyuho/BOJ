#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void) {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		
		cin >> s;

		cout << "String #" << i + 1 << "\n";

		for (int j = 0; j < s.size(); j++) {
			if (s[j] == 'Z')
				printf("A");
			else
				printf("%c", s[j] + 1);
		}

		cout << "\n\n";
	}

	return 0;
}