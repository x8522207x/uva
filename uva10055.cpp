#include <iostream>
using namespace std;
int main(){
	long long int num1=0,num2=0;
	while(cin>>num1>>num2){
		long long int ans=num2-num1;
		if(ans<0){
			ans=-ans;
		}
		cout<<ans<<endl;
	}
}
