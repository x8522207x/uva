#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	int Case;
	cin >> Case;
	while (Case--){
		int players;
		long double probability;
		int I;
		cin >> players >> probability >> I;
		if (probability > 0.0){
			cout << fixed << setprecision(4) << probability*pow(1 - probability, I - 1) / (1 - pow(1 - probability, players));//不能用printf(%.4f)會錯誤
		}
		else {
			cout << "0.0000";
		}
		cout << endl;
	}


	return 0;
}
