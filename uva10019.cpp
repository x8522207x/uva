#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
int main() {
	int Case;
	int two = 1;
	vector<int>twoall;
	for (int i = 0;; i++) {
		twoall.push_back(two);
		two *= 2;
		if (two > 99999) {
			break;
		}
	}
	cin >> Case;
	while (Case--) {
		int b1 = 0;
		int b2 = 0;
		vector<int>hex;
		int number;
		int numberhex;
		cin >> number;
		numberhex = number;
		/*
		to_string another method
		
		stringstream ss;
		ss<<numberhex;
		string s=ss.str();
		
		*/
		for (int i = 0; i < to_string(numberhex).size(); i++) {
			hex.push_back((to_string(numberhex)[i] - '0'));
		}
		numberhex = 0;
		for (int i = 0, j = hex.size() - 1; i < hex.size(), j >= 0; i++, j--) {
			numberhex += hex[i] * pow(16, j);
		}

		for (int i = twoall.size() - 1; i >= 0; i--) {
			if (twoall[i] <= number) {
				number -= twoall[i];
				b1++;
			}
		}
		for (int i = twoall.size() - 1; i >= 0; i--) {
			if (twoall[i] <= numberhex) {
				//cout << twoall[i] << " " << numberhex << endl;
				numberhex -= twoall[i];
				b2++;
			}
		}
		cout << b1 << " " << b2 << endl;
	}
	system("pause");
	return 0;
}
