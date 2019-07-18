#include <iostream>
using namespace std;
int main(){
	int cases=0;
	cin>>cases;
	while(cases--){
		cin.ignore();
		int A=0, F=0;
		cin>>A>>F;
		for(int i=0;i<F;i++){
			for(int j=1;j<=A;j++){
				for(int c=0;c<j;c++){
					cout<<j;
				}
				cout<<endl;
			}
			for(int j=A-1;j>0;j--){
				for(int c=0;c<j;c++){
					cout<<j;
				}
				cout<<endl;
			}
			if(cases==0 && i==F-1){
				break;
			}
				cout<<endl;	
		}
	}
}
