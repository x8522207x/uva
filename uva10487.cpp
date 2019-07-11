#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n=0,cases=1;
	while(cin>>n && n!=0){
		int m=0,ansSum=0;
		vector<int>nV,mV,ans;
		for(int i=0,g=0;i<n;i++){
			cin>>g;
			nV.push_back(g);
		}
		cin>>m;
		for(int i=0,g=0;i<m;i++){
			cin>>g;
			mV.push_back(g);
		}
		for(int i=0;i<nV.size()-1;i++){
			for(int j=i+1;j<nV.size();j++){
				ans.push_back(nV[i]+nV[j]);
			}
		}
		cout<<"Case "<<cases<<":"<<endl;
		for(int c=0;c<mV.size();c++){
			int sum=abs(ans[0]-mV[c]);
			ansSum=ans[0];
			for(int i=0;i<ans.size();i++){
				if(sum>abs(ans[i]-mV[c])){
					sum=abs(ans[i]-mV[c]);
					ansSum=ans[i];
				}
			}
			cout<<"Closest sum to "<<mV[c]<<" is "<<ansSum<<"."<<endl;
		}
		cases++;
	}
}
