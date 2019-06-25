#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int num;
	while(cin>>num){
		vector<int>numbers;
		for(int i=0;i<num;i++){
			int g;
			cin>>g;
			numbers.push_back(g);
		}
		vector<int>answer;
		for(int i=1;i<numbers.size();i++){
			if(numbers[i]-numbers[i-1]<0){
				answer.push_back(-numbers[i]+numbers[i-1]);
			}else{
				answer.push_back(numbers[i]-numbers[i-1]);
			}
		}
		sort(answer.begin(),answer.end());
		int count=0;
		for(int i=0;i<answer.size();i++){
			if(i+1!=answer[i]){
				cout<<"Not jolly"<<endl;
				count++;
				break;
			}
		}
		if(count==0){
			cout<<"Jolly"<<endl;
		}
	
	}

	return 0;
}
