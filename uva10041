#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int cases=0;
	cin>>cases;
	for(int g=0;g<cases;g++){
		int numbers=0;
		vector<int>mid;
		cin>>numbers;
		for(int i=0;i<numbers;i++){
			int number=0;
			cin>>number;
			mid.push_back(number);
		}
		sort(mid.begin(),mid.end());
		int middle=0;
		if(numbers%2==0){
			middle=(mid.at(numbers/2-1)+mid.at(numbers/2))/2;
		}else{
			middle=mid.at(numbers/2);
		}

		int sum=0;
		for(int i=0;i<mid.size();i++){
			if(middle-mid.at(i)<0){
				sum+=mid.at(i)-middle;
			}else{
				sum+=middle-mid.at(i);
			}
		}
		cout<<sum<<endl;
	}
	return 0;

}
