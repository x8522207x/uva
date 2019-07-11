#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector< vector<char> > test;
	string a;
	int line=0, max=0;
	while(getline(cin,a)){
		test.push_back(vector<char>());
		for(int i=0;i<a.length();i++){
			test[line].push_back(a[i]);
		}
		line++;
	}
	for(int i=0;i<line;i++){
		if(test[i].size()>max){
			max=test[i].size();
		}
	}
	for(int i=0;i<line;i++){
		test[i].resize(max);
	}
	for(int j=0;j<max;j++){
		for(int i=line-1;i>=0;i--){
			if(test[i][j]){
				cout<<test[i][j];
			}else if(/*i!=0 &&*/!test[i][j]){
				cout<<" ";
			}
		} 
		cout<<'\n';
	}
}
