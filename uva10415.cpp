#include <iostream>
using namespace std;
int main(){
	int Case=0;
	cin>>Case;
	while(Case--){
		int ans[10]={0};
		int press[10]={0};
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++){
			if(s[i]=='c'){
				for(int j=0;j<10;j++){
					if(j==0||j==4||j==5){
						press[j]=0;
					}else{
						if(press[j]==0){
							press[j]=1;
							ans[j]+=1;
						}
					}
				
				}
			}else if(s[i]=='d'){
				for(int j=0;j<10;j++){
					if(j==0||j==4||j==5||j==9){
						press[j]=0;
					}else {
						if(press[j]==0){
							press[j]=1;
							ans[j]+=1;
						}
					}
				}
			}else if(s[i]=='e'){
				for(int j=0;j<10;j++){
					if(j==1||j==2||j==3||j==6||j==7){
						if(press[j]==0){
							press[j]=1;
							ans[j]+=1;
						}
					}else{
						press[j]=0;
					}
				}
			}else if(s[i]=='f'){
				for(int j=0;j<10;j++){
					if(j==1||j==2||j==3||j==6){
						if(press[j]==0){
							press[j]=1;
							ans[j]+=1;
							
						}
					}else{
						press[j]=0;
					}	
				}
			}else if(s[i]=='g'){
				for(int j=0;j<10;j++){
					if(j==1||j==2||j==3){
						if(press[j]==0){
							press[j]=1;
							ans[j]+=1;
							
						}
					}else{
						press[j]=0;
					}
				}
			}else if(s[i]=='a'){
				for(int j=0;j<10;j++){
					if(j==1||j==2){
						if(press[j]==0){
							press[j]=1;
							ans[j]+=1;
						
						}
					}else{
						press[j]=0;
					}
				}
			}else if(s[i]=='b'){
				for(int j=0;j<10;j++){
					if(j==1){
						if(press[j]==0){
							press[j]=1;
							ans[j]+=1;
							
						}
					}else{
						press[j]=0;
					}
				}
			}else if(s[i]=='C'){
				for(int j=0;j<10;j++){
					if(j==2){
						if(press[j]==0){
							press[j]=1;
							ans[j]+=1;
						}
					}else{
						press[j]=0;
					}
				}
			}else if(s[i]=='D'){
				for(int j=0;j<10;j++){
					if(j==4||j==5||j==9){
						press[j]=0;
					}else{
						if(press[j]==0){
							press[j]=1;
							ans[j]+=1;
						}
					}
				}
			}else if(s[i]=='E'){
				for(int j=0;j<10;j++){
					if(j==4||j==5||j==9||j==8){
						press[j]=0;
					}else {
						if(press[j]==0){
							press[j]=1;
							ans[j]+=1;
						}
					}
				}
			}else if(s[i]=='F'){
				for(int j=0;j<10;j++){
					if(j==4||j==5||j==9||j==8||j==7){
						press[j]=0;
					}else{
						if(press[j]==0){
							press[j]=1;
							ans[j]+=1;
						}
					}
				}
			}else if(s[i]=='G'){
				for(int j=0;j<10;j++){
					if(j==0||j==1||j==2||j==3){
						if(press[j]==0){
							press[j]=1;
							ans[j]+=1;
						}
					}else{
						press[j]=0;
					}
				}
			}else if(s[i]=='A'){
				for(int j=0;j<10;j++){
					if(j==0||j==1||j==2){
						if(press[j]==0){
							press[j]=1;
							ans[j]+=1;
						}
					}else{
						press[j]=0;
					}
				}
			}else if(s[i]=='B'){
				for(int j=0;j<10;j++){
					if(j==0||j==1){
						if(press[j]==0){
							press[j]=1;
							ans[j]+=1;
						}
					}else{
						press[j]=0;
					}
				}
			}
		}
		for(int i=0;i<10;i++){
			cout<<ans[i];
			if(i!=9){
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
