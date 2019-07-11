#include <iostream>
#include <vector>
using namespace std;
int main(){
	int cases=0;
	cin>>cases;
	while(cases--){
		string s,s2;
		vector<int>ans;
		getline(cin,s);
		while(s.length()==0){
			getline(cin,s);
		}
		for(int i=0;i<s.length()/2;i++){
			s2+=s[i];
			int times=0;
			for(int j=0;j<s.length();j+=s2.length()){
				if(s.substr(j,s2.length()) == s2){
					times++;
				}else{
					break;
				}
			}
			if(times*s2.length()==s.length()){
				ans.push_back(s2.length());
			}
		}
		if(ans.size()>0){
			cout<<ans[0]<<endl;
		}else {
			cout<<s.size()<<endl;
		}
		if(cases!=0){
			cout<<endl;
		}
	}
}
