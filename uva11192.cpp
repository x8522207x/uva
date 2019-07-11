#include <iostream>
using namespace std;
int main(){
	int nums=0;
	while(cin>>nums && nums!=0){
		string s;
		cin>>s;
		int reverse=s.length()/nums;
		for(int i=reverse-1;i<s.length();i+=reverse){
			for(int c=i;c>=i-reverse+1;c--){
				cout<<s[c];
			}
		}
		cout<<endl;
	}
}
