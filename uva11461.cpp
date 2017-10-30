#include <iostream>

using namespace std;
int main() {
	int a, b;
	while (cin >> a >> b) {
		if (a == 0 && b == 0) {
			break;
		}
		int numbers=0;
		for (int i = 1; ; i++) {
			if (i*i >= a&&i*i <= b) {
				numbers++;
			}
			else if (i*i > b) {
				break;
			}
		}
		cout << numbers << endl;

	}


	return 0;
}