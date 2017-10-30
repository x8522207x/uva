#include <iostream>
using namespace std;
int main() {
	int Case;
	cin >> Case;
	while (Case--) {
		int a, b;
		int c = 0;
		int d = 0;
		cin >> a >> b;
		c = (a + b) / 2;
		d = (a - b) / 2;
		if (d >= 0&&(c+d)==a) {
			cout << c << " " << d << endl;
		}
		else {
			cout << "impossible" << endl;
		}
	}

}