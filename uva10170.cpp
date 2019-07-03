#include <iostream>
using namespace std;
int main(){
	long long int peoples;
	long long int day;
	while(cin>>peoples>>day){
		long long int sum=0;
		for(long long int i=peoples;;i++){
			sum+=i;
			if(sum>=day){
				cout<<i<<endl;
				break;
			}
		}
	}
}
