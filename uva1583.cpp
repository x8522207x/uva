#include <iostream>
#include <sstream>
using namespace std;
int main(){
	int cases=0;
	cin>>cases;
	while(cases--){
		stringstream ss;
		int num=0;
		bool output=false;
		string s;
		cin>>num;
		for(int i=1;i<num;i++){
			int g=i;
			ss<<i;
			ss>>s;
			for(int c=0;c<s.length();c++){
				g+=s[c]-'0';
			}
			if(g==num){
				output=true;
				cout<<i<<endl;
				break;
			}
			ss.clear();
		}
		if(output==false){
			cout<<0<<endl;
		}
	}
}
