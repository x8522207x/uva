#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
int main(){
	string big="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string small="abcdefghijklmnopqrstuvwxyz";
	int num[26]={0};
	stringstream ss;
	int Case=0;
	string test;
	getline(cin,test);
	ss<<test;
	ss>>Case;
	while(Case--){
		string s;
		getline(cin,s);
		for(int i=0;i<s.length();i++){
			if(s[i]>64&&s[i]<91){
				for(int j=0;j<big.length();j++){
					if(s[i]==big[j]){
						num[j]+=1;
						break;
					}
				}
			}else if(s[i]>96&&s[i]<123){
				for(int j=0;j<small.length();j++){
					if(s[i]==small[j]){
						num[j]+=1;
						break;
					}
				}
			}
		}
	
	}
	int max=0;
	for(int i=0;i<26;i++){
		if(num[i]!=0&&max<num[i]){
			max=num[i];
		}
	}
	for(int i=max;i>0;i--){
		for(int j=0;j<26;j++){
			if(num[j]==i){
				cout<<big[j]<<" "<<num[j]<<endl;
			}
		}
	}


}
