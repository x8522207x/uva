#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string a,b;
	while(cin>>a>>b){
		string ans;
		for(int i=0;i<a.length();i++){
			for(int j=0;j<b.length();j++){
				if(a[i]==b[j]){
					ans+=a[i];
					a[i]='1';
					b[j]='2';
					break;
				}
			}
		}
		sort(ans.begin(),ans.end());
		cout<<ans<<endl;
	}
}
