#include <iostream>
using namespace std;
int main(){
	string s;
	while(getline(cin,s) && s!="*"){
		float one=0;
		int sum=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='/'){
				if(one!=1){
					one=0;
				}
				sum+=one;
				one=0;
			}else if(s[i]=='W'){
				one+=1;
			}else if(s[i]=='H'){
				one+=0.5;
			}else if(s[i]=='Q'){
				one+=0.25;
			}else if(s[i]=='E'){
				one+=0.125;
			}else if(s[i]=='S'){
				one+=0.0625;
			}else if(s[i]=='T'){
				one+=0.03125;
			}else if(s[i]=='X'){
				one+=0.015625;
			}
		}
		cout<<sum<<endl;
	}
}
