#include <iostream>
#include <sstream>
using namespace std;
int main(){
	string s,num;
	stringstream ss;
	while(getline(cin,s)&& s!="0"){
		int nine=0,times=1;
		num=s;
		for(int i=0;i<s.length();i++){
			nine+=s[i]-'0';
		}
		if(nine%9!=0){
			cout<<num<<" is not a multiple of 9."<<endl;
		}else{
			while(nine!=9){
				ss<<nine;
				ss>>s;
				ss.clear();
				nine=0;
				for(int i=0;i<s.length();i++){
					nine+=s[i]-'0';
				}
				times++;
			}
			cout<<num<<" is a multiple of 9 and has 9-degree "<<times<<"."<<endl;
		}
	}
}
