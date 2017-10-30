#include <iostream>
using namespace std;
int main() {
	int Case;
	cin >> Case;
	for(int c=0;c<Case;c++){
		int a, b;
		int sum = 0;
		cin >> a >> b;
		for (int i = a; i <= b; i = i + 2) {
			if (i % 2 == 0) {
				i++;
			}
			sum = sum + i;
		}
		cout << "Case " << c + 1 << ": "<<sum<<endl;
	}



}