#include <iostream>
#include <string>
using namespace std;
int fine(int a);
int main(){
	string problem;
	while (cin >> problem&&problem != "0"){
		int answer = 0;
		for (int i = 0; i < problem.length(); i++){
			answer+=problem[i] - '0';
		}
		while (answer>9){
			answer = fine(answer);
		}
		cout << answer << endl;
	}


}
int fine(int a){
	a = a / 10 + a % 10;
	return a;
}