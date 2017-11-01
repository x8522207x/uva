#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	vector<long long int>two;
	long long int question;
	long long int extwo = 1;
	for (int i = 0;; i++) {
		two.push_back(extwo);
		extwo *= 2;
		if (extwo > 9999999999) {
			break;
		}
	}
	while (cin>>question&&question!=0)
	{
		string ans;
		int one = 0;
		for (int i = two.size() - 1; i >= 0; i--) {
			if (question >= two[i]) {
				cout << question << " ";
				ans+='1';
				question -= two[i];
				one++;
			}
			else if (question < two[i] && ans.size()>0) {
				ans += '0';
			}
		}
		cout << endl;
		cout << "The parity of " << ans << " is " << one << " (mod 2)." << endl;
	}

	system("pause");


}