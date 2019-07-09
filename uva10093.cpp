#include <iostream>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		int ans=0;	
		bool mod=false;
		for(int i=0;i<s.length();i++){
			if(s[i]>47&&s[i]<58){
				ans+=s[i]-'0';
			}else if(s[i]>64&&s[i]<91){
				ans+=s[i]-55;
			}else if(s[i]>96&&s[i]<123){
				ans+=s[i]-61;
			}
		}
		if(ans>=10){
			for(int i=61;i>=2;i--){
				if(ans%i==0){
					mod=true;
					cout<<i+1<<endl;
					break;
				}
			}
			if(mod==false){
				cout<<"such number is impossible!"<<endl;
			}
		}else{
			if(ans<2){
				cout<<2<<endl;
			}else{
				cout<<ans+1<<endl;
			}
		}
	}
}
