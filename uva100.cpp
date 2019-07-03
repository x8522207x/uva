#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int num=0,num1=0;
	while(cin>>num>>num1){
		cout<<num<<" "<<num1<<" ";
		vector<int>times;
		int arr[2]={0,0};
		if(num>num1){
			arr[0]=num1;
			arr[1]=num;
		}else{
			arr[0]=num;
			arr[1]=num1;
		}
		for(int i=arr[0];i<=arr[1];i++){
			int time=0;
			int numb=0;
			numb=i;
			while(numb!=1){
				if(numb%2==0){
					numb/=2;
				}else{
					numb=3*numb+1;
				}
				time++;
			}
			times.push_back(time);
		}
		sort(times.rbegin(),times.rend());
		cout<<times[0]+1<<endl;
	}
}
