#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string input;
	string result = "";

	cin >> input;

	if (input[0] == '0' && input.size() == 1) result += "0";
	
	if (input[0] == '1') result += "1";
	else if (input[0] == '2') result += "10";
	else if (input[0] == '3') result += "11";
	else if (input[0] == '4') result += "100";
	else if (input[0] == '5') result += "101";
	else if (input[0] == '6') result += "110";
	else if (input[0] == '7') result += "111";

	for (int i = 1; i < input.size(); i++) {
		if (input[i] == '0') result += "000";
		else if (input[i] == '1') result += "001";
		else if (input[i] == '2') result += "010";
		else if (input[i] == '3') result += "011";
		else if (input[i] == '4') result += "100";
		else if (input[i] == '5') result += "101";
		else if (input[i] == '6') result += "110";
		else if (input[i] == '7') result += "111";
	}

	cout << result;

	return 0;
}