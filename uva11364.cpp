#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int Case=0;
	cin>>Case;
	while(Case--){
		int nums=0,sum=0;
		cin>>nums;
		vector<int>park;
		for(int i=0,g=0;i<nums;i++){
			cin>>g;
			park.push_back(g);
		}
		sort(park.begin(),park.end());
		for(int i=0;i<park.size()-1;i++){
			sum+=park[i+1]-park[i];
		}
		cout<<2*sum<<endl;
	}
}
