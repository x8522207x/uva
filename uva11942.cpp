#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int cases=0;
	cin>>cases;
	cout<<"Lumberjacks:"<<endl;
	cin.ignore();
	while(cases--){
		string s;
		stringstream ss;
		int num=0;
		vector<int>nums,nums2;
		bool order=0,order2=0;
		getline(cin,s);
		ss<<s;
		while(ss>>num){
			nums.push_back(num);
		}
		nums2=nums;
		sort(nums2.begin(),nums2.end());
		for(int i=0;i<nums.size();i++){
			if(nums[i]!=nums2[i]){
				order=1;
				break;
			}
		}
		sort(nums2.rbegin(),nums2.rend());
		for(int i=0;i<nums.size();i++){
			if(nums[i]!=nums2[i]){
				order2=1;
				break;
			}
		}
		if(order == 1 && order2 == 1){
			cout<<"Unordered"<<endl;
		}else {
			cout<<"Ordered"<<endl;
		}
	}
}
