#include <iostream>
using namespace std;
int main(){
	int firstN=0,secondN=0;
	while(cin>>firstN>>secondN&&firstN!=0&&secondN!=0){
		int ans=0;
		for(int i=1;;i++){
			if(i*i>=firstN&&i*i<=secondN){
				ans++;
			}else if(i*i>secondN){
				break;
			}
		}
		cout<<ans<<endl;
	}
}
