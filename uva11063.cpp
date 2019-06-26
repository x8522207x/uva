#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int num=0;
	int Case=0;
	while(cin>>num){
		Case++;
		int num1=0;
		vector<int>q;
		vector<int>answer;
		for(int i=0;i<num;i++){
			cin>>num1;
			q.push_back(num1);
		}
		for(int i=0;i<q.size()-1;i++){
			for(int y=i+1;y<q.size();y++){
				answer.push_back(q[i]+q[y]);
			}
		}
		sort(answer.begin(),answer.end());
		int g=0;
		for(int i=0;i<answer.size()-1;i++){
			for(int y=i+1;y<answer.size();y++){
				if(answer[i]==answer[y]){
					g=1;
					cout<<"Case #"<<Case<<": It is not a B2-Sequence."<<endl;
					break;
				}
			}
			if(g==1){
				break;
			}
		}
		if(g!=1){
			cout<<"Case #"<<Case<<": It is a B2-Sequence."<<endl;
		}
		cout<<endl;
	}
	return 0;


}
