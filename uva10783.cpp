#include <iostream>
using namespace std;
int main(){
	int Case=0;
	cin>>Case;
	for(int j=1;j<=Case;j++){
		int num1=0,num2=0,ans=0;
		cin>>num1>>num2;
		for(int i=num1;i<=num2;i+=2){
			if(i%2!=1){
				i+=1;
			}
			ans+=i;
		}
		cout<<"Case "<<j<<": "<<ans<<endl;
	}
}
