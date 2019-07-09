#include <iostream>
using namespace std;
int main(){
	int N =0;
	while(cin>>N && N!=0){
		int G =0;
		for(int i=1;i<N;i++){
			for(int j=i+1;j<=N;j++){
				for(int g=i;g>0;g--){
					if(i%g==0 && j%g==0){
						G+=g;
						break;
					}
				}
			}
		}
		cout<<G<<endl;
	}
}
