#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int num=0;
	while(cin>>num){
		vector<int>ans;
		int times=0;
		bool pos=0;
		ans.push_back(num);
		for(int i=0;i<11;i++){
			cin>>num;
			ans.push_back(num);
		}
		sort(ans.begin(),ans.end());
		for(int i=0;i<ans.size();i+=4){
			times=ans[i];
			for(int j=i;j<i+4;j++){
				if(times!=ans[j]){
					
					cout<<"IMPOSSIBLE"<<endl;
					pos=1;
					break;
				}
			}
			if(pos==1){
				break;
			}
		}
		if(pos==0){
			cout<<"POSSIBLE"<<endl;
		}
	}
}
