#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define pi 2*acos(0)
int main(){
	double s=0.0, a=0.0;
	string g;
	while(cin>>s>>a>>g){
		s+=6440;
		if(g =="min"){
			a/=60;
			
		}
		if(a>180){
			int num=a/180;
			a-=180*num;
		}
		double arc = 2*s*pi*a/360;
		double chord = 2*s*sin(a/2/180*pi);
		cout<<fixed<<setprecision(6)<<arc<<" "<<chord<<endl;
	}
}
