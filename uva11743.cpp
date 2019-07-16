#include <iostream>
using namespace std;
int main(){
	int cases=0;
	cin>>cases;
	cin.ignore();
	while(cases--){
		string s;
		int sum=0;
		getline(cin,s);
		for(int i=0;i<s.length();i++){
			if(s[i]==' '){
				s.erase(s.begin()+i);
			}
		}
		for(int i=0;i<s.length();i+=2){
			int num=(s[i]-'0')*2;
			while(num>0){
				sum+=(num%10);
				num/=10;
			}
		}
		for(int i=1;i<s.length();i+=2){
			if(s[i]==' '){
				i++;
			}
			sum+=s[i]-'0';
		}
		if(sum%10==0){
			cout<<"Valid"<<endl;
		}else{
			cout<<"Invalid"<<endl;
		}
	}
}
