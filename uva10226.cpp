#include <iostream>
#include <iomanip>
#include <map>
using namespace std;
int main(){
	int cases=0;
	cin>>cases;
	cin.ignore();
	cin.ignore();
	for(int i=0;i<cases;i++){
		map<string,double>mapAns;
		string s;
		double sum=0;
		while(getline(cin,s) && s.length()!=0){
			sum++;
			mapAns[s]++;
		}
		for(map<string,double>::iterator it=mapAns.begin();it!=mapAns.end();++it){
			cout<<it->first<<" "<<fixed<<setprecision(4)<<it->second/sum*100<<endl;
		}
		if(i!=cases-1){
			cout<<endl;
		}
	}
}
