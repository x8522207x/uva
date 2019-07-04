#include <iostream>
using namespace std;
int main(){
	int Case=0;
	cin>>Case;
	for(int c=1;c<=Case;c++){
		int startX=0, startY=0, endX=0, endY=0, num=0, max=0;
		cin>>startX>>startY>>endX>>endY;
		for(int i=0;;i++){
			if(startY==0){
				startY=startX+1;
				startX=0;
			}else {
				startX++;
				startY--;
			}
			num++;
			if(startX==endX&&startY==endY){
				break;
			}
		}
		cout<<"Case "<<c<<": "<<num<<endl;
	}
}
