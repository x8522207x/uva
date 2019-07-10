#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
	int Case=0;
	cin>>Case;
	while(Case--){
		int nums=0;
		vector<int>tuple;
		cin>>nums;
		for(int i=0,g=0;i<nums;i++){
			cin>>g;
			tuple.push_back(g);
		}
		tuple.push_back(tuple[0]);
		for(int j=0;;j++){
			int zero=0;
			for(int i=0;i<tuple.size()-1;i++){
				tuple[i]=abs(tuple[i+1]-tuple[i]);
				if(tuple[i]==0){
					zero++;
				}
			}
			tuple[tuple.size()-1]=tuple[0];
			if(zero==tuple.size()-1){
				cout<<"ZERO"<<endl;
				break;
			}else if(j==5*(tuple.size()-1)){
				cout<<"LOOP"<<endl;
				break;
			}
		}
	}
}
