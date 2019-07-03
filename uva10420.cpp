#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int Case=0;
	cin>>Case;
	cin.ignore();
	vector<string>sv;
	while(Case--){
		string s;
		getline(cin,s);
		string g;
		for(int i=0;i<s.find_first_of(" ");i++){
			g+=s[i];
		}
		sv.push_back(g);
	}
	sort(sv.begin(),sv.end());
	int ans=0;
	string s2;
	s2=sv[0];
	for(int i=1;i<sv.size();i++){
		if(s2==sv[i]){
			ans++;
		}else{
			cout<<s2<<" "<<ans+1<<endl;
			s2= sv[i];
			ans=1;
		}
	}
	cout<<s2<<" "<<ans<<endl;
}
