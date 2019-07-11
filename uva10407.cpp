#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;
int main(){
	string s;
	while(getline(cin,s) && s!="0"){
		vector<int>nums;
		int num=0,reminder=0,ans=0;
		stringstream ss;
		ss<<s;
		while(ss>>num){
			if(num!=0){
				nums.push_back(num);
			}
		}
		sort(nums.rbegin(),nums.rend());
		for(int i=2000;i>=1;i--){
			bool find=false;
			reminder=nums[0]%i;
			if(nums[0]<0){
				reminder=nums[0]%i+i;
			}
			for(int c=1;c<nums.size();c++){
				int mod = nums[c]%i;
				if(nums[c]<0){
					mod=nums[c]%i+i;
				}
				if(mod!=reminder){
					find=true;
					break;
				}
			}
			if(find==false){
				ans=i;
				break;
			}	
		}
		cout<<ans<<endl;
	}
}
