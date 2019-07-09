#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int Case=0;
	cin>>Case;
	while(Case--){
		int days=0,party=0,ans=1;
		vector<int>rest,workday;
		cin>>days>>party;
		for(int i=0;i<=days/7;i++){
			rest.push_back(6+7*i);
			rest.push_back(7+7*i);
		}
		for(int i=0,f=0;i<party;i++){
			cin>>f;
			for(int c=1;c<=days/f;c++){
				bool same =false;
				for(int j=0;j<rest.size();j++){
					if(rest[j]==c*f){
						same=true;
						break;
					}
				}
				if(same==false){
					workday.push_back(c*f);
				}
			}
		}
		sort(workday.begin(),workday.end());
		for(int i=1;i<workday.size();i++){
			if(workday[i]!=workday[i-1]){
				ans++;
			}
		}
		cout<<ans<<endl;
	}
}
