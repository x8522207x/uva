#include <iostream>
#include <sstream>
using namespace std;
int main(){
	int cases=0;
	cin>>cases;
	for(int i=1;i<=cases;i++){
		string nums;
		stringstream ss;
		long long int num=0,ans=0;
		cin>>nums;
		ss<<nums;
		ss>>num;
		ss.clear();
		while(1){	
			for(int j=0;j<nums.length();j++){
				ans+=(nums[j]-'0')*(nums[j]-'0');
			}
			nums="";
			ss<<ans;
			ss>>nums;
			ss.clear();
			if(ans == 4){
				cout<<"Case #"<<i<<": "<<num<<" is an Unhappy number."<<endl;
				break;
			}else if(ans == 1){
				cout<<"Case #"<<i<<": "<<num<<" is a Happy number."<<endl;
				break;
			}
			ans=0;
		}
	}
}
