#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string n;
	int result = 0;

	while (1) {
		cin >> n;
		if (n == "0") break;
		if (n.length() == 1 && result == 0) result = stoi(n);
		while (n.length() != 1) {
			result = 0;

			for (int i = 0; i < n.length(); i++) {
				result += n.at(i) - '0';
			}
			n = to_string(result);
		}

		cout << result << "\n";
		result = 0;
	}

	return 0;
}