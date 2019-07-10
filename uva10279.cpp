#include <iostream>
using namespace std;
int main(){
	int Case=0,line=0;
	string s;
	cin>>Case;
	while(Case--){
		int arr[11][11]={0};
		cin>>line;
		for(int i=0;i<2*line;i++){
			cin>>s;
			if(s.length()==0){
				getline(cin,s);
			}
			for(int j=0;j<s.length();j++){
				if(s[j]=='*' && i<line){
					arr[i][j]=-1;
					for(int b=-1;b<2;b++){
						for(int c=-1;c<2;c++){
							if(arr[i+b][j+c]!=-1 && i+b>-1 && j+c>-1){
								arr[i+b][j+c]++;
							}
						}
					}
				}else if(s[j]=='x' && i>=line){
					cout<<arr[i-line][j];
				}else if(s[j]=='.' && i>=line){
					cout<<".";
				}
			}
			if(i!=2*line-1 && i>=line){
				cout<<endl;
			}
		}
	}
}
