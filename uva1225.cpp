#include <iostream>
#include <map>
using namespace std;
int main(){
	int cases=0;
	cin>>cases;
	while(cases--){
		map<int,int>ans;
		int nums=0,n=0;;
		cin>>nums;
		for(int i=1;i<=nums;i++){
			if(i<10){
				ans.insert(pair<int,int>(i,ans[i]++));
			}else{
				n=i;
				while(n>0){
					ans.insert(pair<int,int>(n%10,ans[n%10]++));
					n/=10;
				}
			}
		}
		for(int i=0;i<10;i++){
			cout<<ans[i];
			if(i!=9){
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
