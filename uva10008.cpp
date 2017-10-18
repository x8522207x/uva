#include <iostream>
#include <string>
#include<cmath>
using namespace std;
int main(){
	int Case;
	cin >> Case;
	cin.get();
	int a[26] = { 0 };
	int b[26] = { 0 };
	string Beword = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string Seword = "abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < 26; i++){
		b[i] = i;
	}
	for (int i = 0; i < Case;i++){
		string word;
		getline(cin,word);
		for (int c = 0; c <word.length(); c++){
			for (int b = 0; b < 26; b++){
				if (word[c] == Beword[b] || word[c] == Seword[b]){
					a[b] = a[b] + 1;
				}
			}
			
		}
	
	}
	for (int s = 0; s < 25; s++){
		for (int d = s + 1; d < 26; d++){
			if (a[s]< a[d]){
				swap(a[s], a[d]);
				swap(Beword[s], Beword[d]);
				swap(b[s], b[d]);
			}
			else if (a[s] == a[d] && b[s]>b[d]){
				swap(Beword[s], Beword[d]);
				swap(b[s], b[d]);

			}
		}
	}
	
	for (int s = 0; s < 26; s++){
		if (a[s]>0){
			cout << Beword[s] << " " << a[s] ;
			if (s < 25){ cout << endl; }
		}
		
	}

	return 0;
}