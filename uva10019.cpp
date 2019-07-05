#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
	int Case=0;
	cin>>Case;
	vector<int>bin;
	for(int i=15;i>=0;i--){
		bin.push_back(pow(2,i));
	}
	while(Case--){
		int num=0;
		cin>>num;
		int binN=1;
		int hex=num;
		for(int i=0;i<bin.size();i++){
			if(num>=bin[i]){
				binN++;
				num-=bin[i];
			}
		}
		cout<<binN-1<<" ";
		int dec=0;
		int powN=0;
		while(hex!=0){
			dec+=(hex%10)*pow(16,powN);
			powN++;
			hex/=10;
		}
		binN=1;
		for(int i=0;i<bin.size();i++){
			if(dec>=bin[i]){
				binN++;
				dec-=bin[i];
			}
		}
		cout<<binN-1<<endl;
	}
}
