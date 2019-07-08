#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int Case=0;
    string s;
    while(cin>>Case && Case!=0){
    	int num[6]={1,4,5,3,2,6};
    	for(int i=0;i<Case;i++){
    		cin>>s;
    		if(s=="north"){
    			swap(num[0],num[2]);
    			swap(num[2],num[5]);
    			swap(num[4],num[5]);
    		}else if(s=="south"){
    			swap(num[0],num[4]);
    			swap(num[2],num[4]);
    			swap(num[4],num[5]);
    		}else if(s=="east"){
    			swap(num[0],num[3]);
    			swap(num[1],num[3]);
    			swap(num[3],num[5]);
    		}else if(s=="west"){
    			swap(num[0],num[1]);
    			swap(num[1],num[5]);
    			swap(num[3],num[5]);
    		}
    	}
    	cout<<num[0]<<endl;
    }
}
