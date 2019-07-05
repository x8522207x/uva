#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	vector<long long>a;
	a.push_back(1);
	a.push_back(2);
	for(int i=0;i<50;i++){
		a.push_back(a[i]+a[i+1]);
	}
	sort(a.rbegin(),a.rend());
	int Case=0;
	cin>>Case;
	while(Case--){
		long long int nums=0;
		cin>>nums;
		cout<<nums<<" = ";
		bool start=false;
		for(int i=0;i<a.size();i++){
			if(nums>=a[i]){
				nums-=a[i];
				start=true;
				cout<<"1";
			}else if(nums<a[i]&&start==true){
				cout<<"0";
			}
		}
		cout<<" (fib)"<<endl;
	}
}
