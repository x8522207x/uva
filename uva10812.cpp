#include <iostream>
using namespace std;
int main() {
	int Case =0,a=0, b=0;
	cin >> Case;
	while (Case--) {
		cin >> a >> b;
		if ((a - b) / 2 >= 0&&((a + b) / 2+(a - b) / 2)==a) {
			cout << (a + b) / 2 << " " << (a - b) / 2 << endl;
		}
		else {
			cout << "impossible" << endl;
		}
	}
}
