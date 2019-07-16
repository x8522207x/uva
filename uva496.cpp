#include <iostream>
#include <vector>
using namespace std;
int main(){
	string A,B;
	while(getline(cin,A) && getline(cin,B)){
		vector<string>ansA,ansB;
		string C,D;
		int same=0;
		for(int i=0;i<A.length();i++){
			if(A[i]!=' '){
				C+=A[i];
			}else{
				ansA.push_back(C);
				C="";
			}
		}
		ansA.push_back(C);
		for(int i=0;i<B.length();i++){
			if(B[i]!=' '){
				D+=B[i];
			}else{
				ansB.push_back(D);
				D="";
			}
		}
		ansB.push_back(D);
		for(int i=0;i<ansA.size();i++){
			for(int j=0;j<ansB.size();j++){
				if(ansA[i]==ansB[j]){
					same++;
					ansA[i]='g';
					ansB[j]='c';
					break;
				}
			}
		}
		if(ansA.size()>ansB.size()){
			if(same==ansB.size()){
				cout<<"B is a proper subset of A"<<endl;
			}else if(same>0 && same<ansB.size()){
				cout<<"I'm confused!"<<endl;
			}else{
				cout<<"A and B are disjoint"<<endl;
			}
		}else if(ansA.size()==ansB.size()){
			if(same==ansA.size()){
				cout<<"A equals B"<<endl;
			}else if(same>0 && same<ansA.size()){
				cout<<"I'm confused!"<<endl;
			}else{
				cout<<"A and B are disjoint"<<endl;
			}
		}else{
			if(same==ansA.size()){
				cout<<"A is a proper subset of B"<<endl;
			}else if(same>0 && same<ansA.size()){
				cout<<"I'm confused!"<<endl;
			}else{
				cout<<"A and B are disjoint"<<endl;
			}
		}
	}
}
