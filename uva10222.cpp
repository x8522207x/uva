#include <iostream>
using namespace std;
int main(){
	string A = "1234567890qwertyuiopasdfghjklzxcvbnm ",B = "34567890-=ertyuiop[]dfghjkl;'cvbnm,. ",B1 = "34567890_+ERTYUIOP{}DFGHJKL:'CVBNM<> ",C;
	while (getline(cin, C)&&C.length() > 0){
		for (int i = 0; i < C.length(); i++){
			for (int j = 0; j < B.length(); j++){
				if (C[i] == B[j] || C[i] == B1[j]){ 
					cout << A[j]; 
				}
			}
		}
		cout << endl;
	}
}
