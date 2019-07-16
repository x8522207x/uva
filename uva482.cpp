#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(){
	int cases=0;
	cin>>cases;
	cin.ignore();
	while(cases--){
		cin.ignore();
		string s,g;
		stringstream ss;
		int num=0;
		vector<int>ansI;
		vector<string>ansS;
		getline(cin,s);
		ss<<s;
		while(ss>>num){
			ansI.push_back(num);
		}
		ss.clear();
		getline(cin,s);
		for(int i=0;i<s.length();i++){
			if(s[i]!=' '){
				g+=s[i];
			}else{
				ansS.push_back(g);
				g="";
			}
		}
		ansS.push_back(g);
		for(int i=0;i<ansI.size()-1;i++){
			for(int j=i+1;j<ansI.size();j++){
				if(ansI[i]>ansI[j]){
					swap(ansI[i],ansI[j]);
					swap(ansS[i],ansS[j]);
				}
			}
		}
		for(int i=0;i<ansS.size();i++){
			cout<<ansS[i]<<endl;
		}
		if(cases!=0){
			cout<<endl;
		}
	}
}
