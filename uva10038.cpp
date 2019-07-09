#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int num=0;
	while(cin>>num){
		int count=0;
		vector<int>numbers,answer;
		for(int i=0,g=0;i<num;i++){
			cin>>g;
			numbers.push_back(g);
		}
		for(int i=1;i<numbers.size();i++){
			if(numbers[i]-numbers[i-1]<0){
				answer.push_back(-numbers[i]+numbers[i-1]);
			}else{
				answer.push_back(numbers[i]-numbers[i-1]);
			}
		}
		sort(answer.begin(),answer.end());
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
}
