#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define pi 2.0*acos(0.0)
int main(){
	float a;
	while(cin>>a){
		double mid=a*a-4*(a*a*pi*1/12-(a*a*pi*1/6-sqrt(3)/4*a*a));
		double out=a*a-(4*(a*a*1/4*pi-a*a/2)-mid);
		double exmid=4*(a*a*1/4*pi-a*a/2)-2*mid;
		cout<<fixed<<setprecision(3)<<mid<<" "<<exmid<<" "<<out<<endl;
	}
}
