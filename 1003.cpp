#include <stdlib.h>
#include <iostream>

using namespace std;

int main(void) {
	int count0, count1, prevCount0, prevCount1, tempCount0, tempCount1, T, C;

	cin >> T;

	for (; T > 0; T--) {
		count0 = 0;
		count1 = 0;
		cin >> C;
		for (int i = 0; i < C + 1; i++) {
			if (i == 0) {
				count0 = 1;
				count1 = 0;
			}
			else if(i == 1) {
				prevCount0 = 1;
				prevCount1 = 0;
				count0 = 0;
				count1 = 1;
			}
			else {
				tempCount0 = count0;
				tempCount1 = count1;
				count0 = prevCount0 + count0;
				count1 = prevCount1 + count1;
				prevCount0 = tempCount0;
				prevCount1 = tempCount1;
			}
		}
		cout << count0 << " " << count1 << endl;
	}

	return 0;
}