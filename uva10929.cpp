#include <iostream>
#include <string>
#include<cmath>
using namespace std;
int main(){
	string input;
	while (cin >> input&&input != "0"){
		int odd = 0;
		int even = 0;
		for (int i = 0; i < input.length(); i = i + 2){
			odd = odd + input[i] - '0';
		}
		for (int i = 1; i < input.length(); i = i + 2){
			even = even + input[i] - '0';
		}
		if (abs(odd - even) % 11 == 0){
			cout << input << " is a multiple of 11." << endl;
		}
		else{ cout << input << " is not a multiple of 11." << endl; }
	}
} 
