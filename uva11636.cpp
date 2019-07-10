#include <iostream>
using namespace std;
int main(){
	int num=0,cases=1;
	while(cin>>num && num>=0){
		int start=1,times=0;
		while(2*start < num){
			start*=2;
			times++;
		}
		if(num!=1){
			cout<<"Case "<<cases<<": "<<times+1<<endl;
		}else{
			cout<<"Case "<<cases<<": "<<times<<endl;
		}
		cases++;
	}
}
