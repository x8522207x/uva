#include <iostream>
using namespace std;
int main(){
	long long int n=0;
	while(cin>>n&&n!=0){
		if(n<10){
			cout<<n<<endl;
		}else{
			int ans=0;
			while(n>10){
				ans+=n%10;
				n/=10;
			}
			ans+=n;
			while(ans>=10){
				ans=ans%10+ans/10;
			}
			cout<<ans<<endl;
		}
	}
}
