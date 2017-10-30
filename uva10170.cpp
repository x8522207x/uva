#include <iostream>
using namespace std;
int main() {

	long long int people, day;
	while (cin >> people >> day) {
		long long int now = 0;
		long long int a = people;
		for (long long int i = people;; i++) {
			now = now + i;
			if (now == day) {
				cout << a << endl;
				break;
			}
			else if (now > day) {
				cout << a << endl;
				break;
			}
			a++;
		}
	}
	system("pause");
	return 0;


}