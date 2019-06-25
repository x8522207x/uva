#include <iostream>
#include <vector>
using namespace std;
int main(){
	int Case=0;
	cin>>Case;
	
	for(int g=0;g<Case;g++){
		int times=0;
		cin>>times;
		vector<int>step;
		for(int i=0;i<times;i++){
			int walls=0;
			cin>>walls;
			step.push_back(walls);
		}
		int high=0;
		int low=0;
		for(int i=1;i<step.size();i++){
			if(step[i]-step[i-1]>0){
				high+=1;
			}else if(step[i]-step[i-1]<0){
				low+=1;
			}
		}
		cout<<"Case "<<g+1<<": "<<high<<" "<<low<<endl;
	}
	return 0;
}
