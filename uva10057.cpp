#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	long long int n=0;
	while(cin>>n){
		vector<int>nums,sum;
		int min=100000,firAns=0,secAns=0,thirAns=0;
		for(int i=0,c=0;i<n;i++){
			cin>>c;
			nums.push_back(c);
		}
		sort(nums.begin(),nums.end());
		for(int i=1;i<=nums.back();i++){
			int s=0;
			for(int c=0;c<nums.size();c++){
				s+=abs(nums[c]-i);
			}
			sum.push_back(s);
		}
		for(int i=0;i<sum.size();i++){
			if(sum[i]<min){
				min=sum[i];
				firAns=i;
			}
		}
		if(nums.size()%2==0){
			for(int i=0;i<nums.size()/2;i++){
				if(nums[nums.size()/2-1]==nums[i]){
					secAns++;
				}
			}
			for(int i=nums.size()/2+1;i<nums.size();i++){
				if(nums[nums.size()/2]==nums[i]){
					secAns++;
				}
			}
		}else {
			for(int i=0;i<nums.size();i++){
				if(nums[nums.size()/2]==nums[i]){
					secAns++;
				}
			}
			secAns-=1;
		}
		for(int i=0;i<sum.size();i++){
			if(sum[i]==min){
				thirAns++;
			}
		}
		cout<<firAns+1<<" "<<secAns+1<<" "<<thirAns<<endl;		
	}
}
