#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	int Case;
	cin >> Case;
	while (Case--){
		int players=0,I=0;
		long double probability=0.0;
		cin >> players >> probability >> I;
		if (probability > 0.0){
			cout << fixed << setprecision(4) << probability*pow(1 - probability, I - 1) / (1 - pow(1 - probability, players));
		}
		else {
			cout << "0.0000";
		}
		cout << endl;
	}
}
