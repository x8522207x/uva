#include <iostream>
#include <vector>
using namespace std;
int main(){
	int A=0,B=0;
	while(cin>>A>>B && A!=0){
		vector<int>X,Y;
		int notrade=0;
		for(int i=0,g=0;i<A;i++){
			bool same=false;
			cin>>g;
			for(int c=0;c<X.size();c++){
				if(X[c]==g){
					same=true;
					break;
				}
			}
			if(same==false){
				X.push_back(g);
			}
		}
		for(int i=0,g=0;i<B;i++){
			bool same=false;
			cin>>g;
			for(int c=0;c<Y.size();c++){
				if(Y[c]==g){
					same=true;
					break;
				}
			}
			if(same==false){
				Y.push_back(g);
			}
		}
		for(int i=0;i<X.size();i++){
			for(int j=0;j<Y.size();j++){
				if(X[i]==Y[j]){
					notrade++;
					break;
				}
			}
		}
		if(X.size()>Y.size()){
			cout<<Y.size()-notrade<<endl;
		}else {
			cout<<X.size()-notrade<<endl;
		}
	}
}
