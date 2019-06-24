#include <iostream>
#include <string>
using namespace std;
int main(){
	string A;
	int change = 0;
	while (getline(cin, A)){
		
		for (int i = 0; i < A.length(); i++){
			if (A[i] == '"'){
				if (change == 0){
					A.erase(i, 1);
					A.insert(i, "``");
					change++;
				}
				else{
					A.erase(i, 1);
					A.insert(i, "''");
					change = 0;
				}
			}
		}
		cout << A << endl;


	}


}
