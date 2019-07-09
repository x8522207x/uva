#include <iostream>
using namespace std;
int main(){
	string s;
	int Case=1;
	while(getline(cin,s)){
		int time[129]={0};
		if(Case!=1){
			cout<<endl;
		}
		for(int i=0;i<s.length();i++){
			time[s[i]]++;
		}
		for(int i=1;i<1001;i++){
			for(int j=128;j>31;j--){
				if(time[j]==i){
					cout<<j<<" "<<i<<endl;
				}
			}
		}
		Case++;
	}
}
