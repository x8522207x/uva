#include <iostream>
using namespace std;
int main(){
	int days[12]={31,28,31,30,31,30,31,31,30,31,30,31},Case=0;
	string week[7]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
	cin>>Case;
	while(Case--){//   1/1 星期六
		int month=0,day=0;
		cin>>month>>day;
		for(int i=0;i<month-1;i++){
			day+=days[i];
		}
		day%=7;
		cout<<week[day-1]<<endl;	
	}
}
