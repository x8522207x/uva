#include<iostream>
#include<string>
using namespace std;
int main(){
	string A;
	string B;
	string C = "abcdefghijklmnopqrstuvwxyz";
	while (getline(cin, A) && getline(cin, B)){		
		for (int i = 0; i < C.length(); i++){
			for (int a = 0; a < A.length(); a++){
				for (int b = 0; b < B.length(); b++){
					if (C[i] == A[a] && C[i] == B[b]){
						A[a] = '1';
						B[b] = '1';
						cout << C[i];	
					}
				}
			}
		}
		cout << endl;
	}
}