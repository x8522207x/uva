#include <iostream>
#include <vector>
using namespace std;
int main(){
	int N=0,R=0;
	while(cin>>N>>R){
		vector<int>vol;
		bool output=false;
		for(int i=0,g=0;i<R;i++){
			cin>>g;
			vol.push_back(g);
		}
		for(int i=1;i<=N;i++){
			bool same=false;
			for(int j=0;j<vol.size();j++){
				if(vol[j]==i){
					vol.erase(vol.begin()+j);
					same=true;
					break;
				}
			}
			if(same==false){
				output=true;
				cout<<i<<" ";
			}
		}
		if(output==false){
			cout<<"*"<<endl;
		}else{
			cout<<endl;
		}
	}
}
