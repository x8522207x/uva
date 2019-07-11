#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int N=0,Q=0,cases=1;
	while(cin>>N>>Q && N!=0){
		vector<int>marbles,queries;
		for(int i=0,g=0;i<N+Q;i++){
			if(i<N){
				cin>>g;
				marbles.push_back(g);
			}else if(i>=N){
				cin>>g;
				queries.push_back(g);
			}
		}
		cout<<"CASE# "<<cases<<":"<<endl;
		sort(marbles.begin(),marbles.end());
		for(int i=0;i<queries.size();i++){
			bool find =false;
			for(int c=0;c<marbles.size();c++){
				if(queries[i]==marbles[c]){
					cout<<queries[i]<<" found at "<<c+1<<endl;
					find=true;
					break;
				}
			}
			if(find == false){
				cout<<queries[i]<<" not found"<<endl;
			}
		}
		cases++;
	}
}
