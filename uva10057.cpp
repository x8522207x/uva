#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	int num=0;
	while(cin>>num){
		vector<int>nums;
		int firAns=0,firAns2=0,secAns=0,thiAns=0;
		for(int i=0,g=0;i<num;i++){
			cin>>g;
			nums.push_back(g);
		}
		sort(nums.begin(),nums.end());
		if(nums.size()%2==0){
			firAns=nums[nums.size()/2-1];
			firAns2=nums[nums.size()/2];
		}else {
			firAns=nums[nums.size()/2];
		}
		for(int i=1;i<=nums.back();i++){
			int g=0,min=0;
			secAns=0;
			for(int j=0;j<nums.size();j++){
				g+=abs(nums[j]-i);
				min+=abs(nums[j]-firAns);
				if(nums[j]==firAns || nums[j]==firAns2){
					secAns++;
				}
			}
			if(g==min){
				thiAns++;
			}
		}
		cout<<firAns<<" "<<secAns<<" "<<thiAns<<endl;
	}
}
