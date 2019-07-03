#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
	long long int input=0;
	long long int kutixkuti = 0;
	long long int lakhxlakh = 0;
	long long int hajarxhajar = 0;
	long long int shataxshata = 0;
	long long int kuti = 0;
	long long int lakh = 0;
	long long int hajar = 0;
	long long int shata = 0;
	long long int single = 0;
	int n = 0;
	while (cin>>input&&++n) {
		if (input == 0){
			cout << "   " << n << ". 0"<<endl;
			continue;
		}
		kutixkuti = input / 100000000000000;
		input = input - kutixkuti * 100000000000000;
		lakhxlakh = input / 1000000000000;//12
		input = input - lakhxlakh * 1000000000000;
		hajarxhajar = input / 10000000000;//10
		input = input - hajarxhajar * 10000000000;
		shataxshata = input / 1000000000;//9
		input = input - shataxshata * 1000000000;
		kuti = input / 10000000;
		input = input - kuti * 10000000;
		lakh = input / 100000;
		input = input - lakh * 100000;
		hajar = input / 1000;
		input = input - hajar * 1000;
		shata = input / 100;
		input = input - shata * 100;
		single = input;
		if (n < 10){
			cout << "   " << n << ".";
		}
		else if (n < 100 & n >= 10){ cout << "  " << n << "."; }
		else if (n < 1000 & n >= 100){ cout << " " << n << "."; }
		else if (n < 10000 & n >= 100){ cout<< n << "."; }
		if (kutixkuti != 0){
			cout << " "<<kutixkuti << " kuti";
		}
		
		if (lakhxlakh != 0){
			cout <<" "<< lakhxlakh << " lakh";
		}
		
		if (hajarxhajar != 0){
			cout << " " << hajarxhajar << " hajar";
		}
		
		if (shataxshata != 0){
			cout << " " << shataxshata << " shata";
		}
		
		if (kuti != 0){
			cout << " " << kuti << " kuti";
		}
		else if (kutixkuti != 0 || lakhxlakh != 0 || hajarxhajar != 0 || shataxshata != 0){ cout << " kuti"; }
		if (lakh != 0){
			cout << " " << lakh << " lakh";
		}
		
		if (hajar != 0){
			cout << " " << hajar << " hajar";
		}
		
		if (shata != 0){
			cout << " " << shata << " shata";
		}
		
		if (single != 0){
			cout << " " << single;
		}
		cout << endl;
	}
	


	return 0;
}
