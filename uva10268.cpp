#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>
using namespace std;
int main(){
	string x;
	long long int a;
	while(getline(cin,x)){
	    long double x2=0.0;
		long long int ans=0;
		string s;
		stringstream ss;
		ss<<x;
		ss>>x2;
		ss.clear();
		getline(cin,s);
		ss<<s;
		vector<int>num;
		while(ss>>a){
			num.push_back(a);	
			ss.clear();
		}
		for(int i=0,j=num.size()-1;i<num.size()-1,j>0;i++,j--){
			if(j!=1){
				ans+=num[i]*j*pow(x2,j-1);
			}else{
				ans+=num[i]*j;
			}
		}
		cout<<ans<<endl;
	}
}
