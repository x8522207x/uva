#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int fib[38] = { 0 };
	fib[0] = 1;
	fib[1] = 2;
	for (int i = 2; i<38; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	int Case = 0;
	int N = 0;
	cin >> Case;
	while (Case--) {
		cin >> N;
		cout << N << " = ";
		vector<int>ans;
		for (int i = 37; i >= 0; i--) {
			if (N >= fib[i]) {
				ans.push_back(1);
				N -= fib[i];
			}
			else if (ans.size()>0 && N<fib[i]) {
				ans.push_back(0);
			}
		}
		for (int i = 0; i<ans.size(); i++) {
			cout << ans[i];
		}
		cout << " (fib)" << endl;
	}
}