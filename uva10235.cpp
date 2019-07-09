#include <iostream>
#include <sstream>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		string b;
		int fN=0,sN=0;
		stringstream ss;
		bool end=false;
		for(int i=s.size()-1;i>=0;i--){
			b+=s[i];
		}
		ss<<s;
		ss>>fN;
		ss.clear();
		ss<<b;
		ss>>sN;
		ss.clear();
		for(int i=2;i<=fN/2;i++){
			if(fN%i==0){
				cout<<fN<<" is not prime."<<endl;
				end=true;
				break;
			}
		}
		if(end==false){
			if(sN==fN){
				cout<<fN<<" is prime."<<endl;
			}else{
				for(int i=2;i<sN/2;i++){
					if(sN%i==0){
						cout<<fN<<" is prime."<<endl;
						end=true;
						break;
					}
				}
				if(end==false){
					cout<<fN<<" is emirp."<<endl;
				}
			}
		}
	}
}
