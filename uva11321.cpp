#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int numbers=0,mod=0;
	while(cin>>numbers>>mod && numbers!=0){
		int size=0;
		vector<int>num;
		cout<<numbers<<" "<<mod<<endl;
		for(int i=0, nums=0;i<numbers;i++){
			cin>>nums;
			num.push_back(nums);
		}
		sort(num.begin(),num.end());
		for(int i=-mod;size!=num.size();i++){
			for(int j=num.size()-1;j>=0;j--){
				if(num[j]%2!=0 &&num[j]%mod==i){
					cout<<num[j]<<endl;
					size++;
				}
			}
			for(int j=0;j<num.size();j++){
				if(num[j]%2==0 &&num[j]%mod==i){
					cout<<num[j]<<endl;
					size++;
				}
			}
		}
	}
	cout<<0<<" "<<0<<endl;
}
