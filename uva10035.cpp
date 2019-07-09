#include <iostream>
using namespace std;
int main(){
	string num1,num2;
	while(cin>>num1>>num2 && num1!="0"){
		int carry=0, ten=0;
		if(num1.length()<num2.length()){
			num1.swap(num2);
		}
		for(int i=num2.length()-1,j=num1.length()-1;i>=0;i--,j--){
			if(num2[i]-'0'+num1[j]-'0'+ten>9){
				carry++;
				ten=1;
			}else{
				ten=0;
			}
		}
		if(ten>0){
			for(int i=num1.length()-num2.length()-1;i>=0;i--){
				if(num1[i]-'0'+ten>9){
					carry++;
				}else{
					ten=0;
				}
			}
		}
		if(carry==0){
			cout<<"No carry operation."<<endl;
		}else if(carry==1){
			cout<<carry<<" carry operation."<<endl;
		}else{
			cout<<carry<<" carry operations."<<endl;
		}
	}
}
