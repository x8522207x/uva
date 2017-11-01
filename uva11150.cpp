#include <iostream>
using namespace std;
int main() {
	int cola = 0;

	while (cin >> cola) {
		int air = 0;
		int ans = 0;
		int borrow = 0;
		if (cola % 3 == 2) {
			borrow++;
			air++;
		}
		for(int i=0;;i++){
			ans += cola;
			air += cola;
			cola = 0;
			if (air < 3) {
				if (air == 2 && borrow == 0) {
					ans++;
				}
				break;
			}
			cola = air / 3;
			air = air - air / 3 * 3;
		}
		cout <<ans << endl;
	}
}