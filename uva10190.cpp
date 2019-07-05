#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int fN=0,sN=0;
	while(cin>>fN>>sN){
		if(sN==1){
			cout<<"Boring!"<<endl;
			continue;
		}
		vector<int>result;
		int max=1;
		result.push_back(max);
		for(int i=1;max<=fN;i++){
			max*=sN;
			result.push_back(max);
		}
		sort(result.rbegin(),result.rend());	
		if(result[1] == fN){
			for(int i=1;i<result.size();i++){
				cout<<result[i];
				if(i!=result.size()-1){
					cout<<" ";
				}
			}
			cout<<endl;
		}else{
			cout<<"Boring!"<<endl;
		}
	}
}
