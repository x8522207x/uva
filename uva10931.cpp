#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
	vector<long long >bin;
	for(int i=31;i>=0;i--){
		bin.push_back(pow(2,i));
	}
	int num=0;
	while(cin>>num && num!=0){
		bool start=false;
		int oneN=0;
		cout<<"The parity of ";
		for(int i=0;i<bin.size();i++){
			if(bin[i]<=num){
				cout<<"1";
				oneN++;
				start=true;
				num-=bin[i];
			}else if(start==true){
				cout<<"0";
			}
		}
		cout<<" is "<<oneN<<" (mod 2)."<<endl;
	}
}
