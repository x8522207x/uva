#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double x1,y1,x2,y2,g,g1,x3,y3,x4,y4;
	while(cin>>x1>>y1>>x2>>y2>>g>>g1>>x3>>y3){
		if(x2==x3 && y2==y3){
			x4=x1+g-x2;
			y4=y1+g1-y2;
			if(x1+g<0 && x4==0){
				x4=-x4;
			}
		}else if(x1==g && y1==g1){
			x4=x2+x3-x1;
			y4=y2+y3-y1;
			if(x2+x3<0 && x4==0){
				x4=-x4;
			}
		}else if(x1==x3 && y1==y3){
			x4=x2+g-x1;
			y4=y2+g1-y1;
			if(x2+g<0 && x4==0){
				x4=-x4;
			}
		}else{
			x4=x1+x3-x2;
			y4=y1+y3-y2;
			if(x1+x3<0 && x4==0){
				x4=-x4;
			}
		}
		cout<<fixed<<setprecision(3)<<x4<<" "<<y4<<endl;
	}
}
