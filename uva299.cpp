#include <iostream>
#include <vector>
using namespace std;
int main(){
	int Case=0;
	cin>>Case;
	while(Case--){
		int count=0, swapT=0;
		vector<int>num;
		cin>>count;
		for(int i=0,c=0;i<count;i++){
			cin>>c;
			num.push_back(c);
		}
		for(int i=0;i<num.size()-1;i++){
			for(int j=i+1;j<num.size();j++){
				if(num[i]>num[j]){
					swap(num[i],num[j]);
					swapT++;
				}
			}
		}
		cout<<"Optimal train swapping takes "<<swapT<<" swaps."<<endl;
	}
}
