#include <iostream>
#include <vector>
using namespace std;
int main(){
	int L=0,N=0;
	while(cin>>L>>N){
		vector<string>unregular;
		string s;
		for(int i=0;i<2*L;i++){
			cin>>s;
			unregular.push_back(s);
		}
		for(int i=0;i<N;i++){
			bool regular=0;
			cin>>s;
			for(int c=0;c<unregular.size();c+=2){
				if(s==unregular[c]){
					cout<<unregular[c+1]<<endl;
					regular=1;
					break;
				}
			}
			if(regular==1){
				continue;
			}else if((s[s.size()-1]=='y'&&s[s.size()-2]=='a')||(s[s.size()-1]=='y'&&s[s.size()-2]=='i')||(s[s.size()-1]=='y'&&s[s.size()-2]=='o')||(s[s.size()-1]=='y'&&s[s.size()-2]=='e')||(s[s.size()-1]=='y'&&s[s.size()-2]=='u')){
				cout<<s<<"s"<<endl;
			}else if(s[s.size()-1]=='y'){
				for(int i=0;i<s.length()-1;i++){
					cout<<s[i];
				}
				cout<<"ies"<<endl;
			}else if(s[s.size()-1]=='o'||s[s.size()-1]=='s'||s[s.size()-1]=='x'||(s[s.size()-1]=='h'&&s[s.size()-2]=='c')||(s[s.size()-1]=='h'&&s[s.size()-2]=='s')){
				cout<<s<<"es"<<endl;
			}else{
				cout<<s<<"s"<<endl;
			}
		}
	}
}
