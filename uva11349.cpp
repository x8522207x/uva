#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdio>
using namespace std;
int main() {
	int Case;
	cin >> Case;
	cin.ignore();
	for (int o = 1; o <= Case; o++) {
		long long int a[10000] = { 0 };
		int write = 0;
		int N = 0;
		char w[10];
		cin.getline(w, 10);
		sscanf(w, "N = %d", &N);
		for (int i = 0; i<N*N; i++) {
			cin >> a[i];
		}

		for (int i = 0; i<N*N; i++) {
			if (a[i] != a[N*N - 1 - i]) {
				write = 1;
				break;
			}
			else if (a[i]<0) {
				write = 1;
				break;
			}
		}
		if (write == 0) {
			cout << "Test #" << o << ": Symmetric." << endl;
		}
		else if (write == 1) {
			cout << "Test #" << o << ": Non-symmetric." << endl;
		}
		cin.ignore(256, '\n');
	}

}
