#include <iostream>
#include <vector>
using namespace std;
int main(){
	int cases=0;
	cin>>cases;
	while(cases--){
		int M=0,N=0,Q=0;
		cin>>M>>N>>Q;
		cin.ignore();
		cout<<M<<" "<<N<<" "<<Q<<endl;
		vector<string>rec;
		for(int i=0;i<M;i++){
			string s;
			getline(cin,s);
			rec.push_back(s);
		}
		for(int i=0;i<Q;i++){
			int y=0,x=0,length=1;
			cin>>y>>x;
			for(int j=1;j<=x;j++){
				bool same=0;
				if(y-j<0 || y+j>=M || x-j<0 || x+j>=N){
					break;
				}
				for(int c=-j;c<=j;c++){
					for(int g=-j;g<=j;g++){
						if(rec[y][x] == rec[y+g][x+c]){
							same=0;
						}else{
							same=1;
							break;
						}
					}
					if(same==1){
						break;
					}
				}
				if(same==0){
					length+=2;
				}
			}
			cout<<length<<endl;
		}
	}
}
