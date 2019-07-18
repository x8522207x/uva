#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int cases=0;
	cin>>cases;
	while(cases--){
		vector<int>num;
		for(int i=0,g=0;i<4;i++){
			cin>>g;
			num.push_back(g);
		}
		sort(num.begin(),num.end());
		if(num[0]== num[1] && num[1] == num[2] && num[2] == num[3]){
			cout<<"square"<<endl;
		}else if(num[0]== num[1] && num[2]== num[3]){
			cout<<"rectangle"<<endl;		
		}else if(num[0]+ num[1]+ num[2]<= num[3] || num[0]==0){
			cout<<"banana"<<endl;
		}else {
			cout<<"quadrangle"<<endl;
		}
	}
}
