#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int cases=0;
	cin>>cases;
	while(cases--){
		long long int x=0,y=0;
		cin>>x>>y;
		int max=0;
		long long int maxn=0;
		for(long long int i=x;i<=y;i++){
			if(i%2!=0){
				continue;
			}
			int div=0;
			for(long long int j=1;j<=sqrt(i);j++){
				if(i%j==0){
					div++;
					if(i/j !=j){
						div++;
					}
				}
			}
			if(div>max){
				maxn=i;
				max=div;
			}
		}
		cout<<"Between "<<x<<" and "<<y<<", "<<maxn<<" has a maximum of "<<max<<" divisors."<<endl;
	}
}
