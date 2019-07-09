#include <iostream>
using namespace std;
int main(){
	int x=0,y=0,Case=1;
	string s;
	while(cin>>x>>y && x!=0){
		if(Case!=1){
			cout<<endl;
		}
		int arr[100][100]={0};
		for(int i=0;i<x;i++){
			cin>>s;
			for(int j=0;j<s.length();j++){
				if(s[j]=='*'){
					arr[i][j]=-1;
					for(int b=-1;b<2;b++){
						for(int c=-1;c<2;c++){
							if(arr[i+b][j+c]!=-1 && i+b>-1 && j+c>-1){
								arr[i+b][j+c]++;
							}
						}
					}
				}
			}
		}
		cout<<"Field #"<<Case<<":"<<endl;
		for(int i=0;i<x;i++){
			for(int j=0;j<y;j++){
				if(arr[i][j]==-1){
					cout<<"*";
				}else{
					cout<<arr[i][j];
				}
			}
			cout<<endl;
		}
		Case++;
	}
}
