#include <iostream>
#include <vector>
using namespace std;
int main(){
	int num=0;
	vector<int>nums;
	vector<string>sV;
	while(cin>>num && num!=0){
		cin.ignore();
		string s;
		getline(cin,s);
		if(s!="right on"){
			nums.push_back(num);
			sV.push_back(s);
		}else {
			bool output=false;
			for(int i=0;i<nums.size();i++){
				if(nums[i]>num && sV[i]=="too low"){
					nums.clear();
					sV.clear();
					output=true;
					cout<<"Stan is dishonest"<<endl;
					break;
				}else if(nums[i]<num && sV[i]=="too high"){
					nums.clear();
					sV.clear();
					output=true;
					cout<<"Stan is dishonest"<<endl;
					break;
				}
			}
			if(output==false){
				nums.clear();
				sV.clear();
				cout<<"Stan may be honest"<<endl;
			}
		}
	}
}
