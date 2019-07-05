#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int Case=0;
	cin>>Case;
	for(int c=1;c<=Case;c++){
		string a,b;
		int fN=0,sN=0;
		bool need = false;
		cin>>a>>b;
		for(int i=a.length()-1,j=0;i>=0,j<a.length();i--,j++){
			fN+=(a[j]-'0')*pow(2,i);
		}
		for(int i=b.length()-1,j=0;i>=0,j<b.length();i--,j++){
			sN+=(b[j]-'0')*pow(2,i);
		}
		for(int i=2;i<=sN;i++){
			if(fN%i==0&&sN%i==0){
				cout<<"Pair #"<<c<<": All you need is love!"<<endl;
				need=true;
				break;
			}
		}
		if(need == false){
			cout<<"Pair #"<<c<<": Love is not all you need!"<<endl;
		}
	}
}
