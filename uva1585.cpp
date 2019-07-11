#include <iostream>
using namespace std;
int main(){
	int cases=0;
	cin>>cases;
	while(cases--){
		int ans=0,con=1;
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++){
			if(s[i]=='O'){
				ans+=con;
				con++;
			}else{
				con=1;
			}
		}
		cout<<ans<<endl;
	}
}
