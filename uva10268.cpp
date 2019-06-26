#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;
int main() {
	long long int a;
	long long int d;
	vector<long long int>b;
	long long int c;
	while(1) {
		cin >> a;
		cin.ignore();
		d = a;
		long long int answer = 0;
		string line;
		getline(cin,line);
		stringstream ss(line);
		while (ss>>c) {
			b.push_back(c);
		}
		for (int i = 0; i<int(b.size()); i++) {
			if (int(b.size()) - i - 2 == 0) {
				d = 1;
			}
			else if (int(b.size()) - i - 2 > 0) {
				for (int j = 1; j<int(b.size()) - i - 2; j++) {
					d = d*a;
				}
			}
				answer = answer + b[i] * (int(b.size()) - 1 - i)*d;
				d = a;
		}
		cout << answer << endl;
		ss.clear();
		b.clear();
	} 
	
	
	
}
