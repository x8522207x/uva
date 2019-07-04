#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
int main(){
	int Case=0;
	cin>>Case;
	cin.ignore();
	for(int c=1;c<=Case;c++){
		vector<int>matrix;
		stringstream ss;
		string firstLine;
		getline(cin,firstLine);
		string stringn;
		bool non=false;
		int intn=0;
		int num=0;
		for(int i=4;i<firstLine.length();i++){
			stringn+=firstLine[i];
		}
		ss<<stringn;
		ss>>intn;
		ss.clear();
		for(int i=0;i<intn;i++){
			getline(cin,stringn);
			ss<<stringn;
			while(ss>>num){
				matrix.push_back(num);
			}
			ss.clear();
		}
		int size=matrix.size();
		for(int i=0;i<size/2;i++){
			if(matrix[i]!=matrix[size-1-i]||(matrix[i]==-1&&matrix[size-1-i]==-1)){
				cout<<"Test #"<<c<<": Non-symmetric."<<endl;
				non=true;
				break;
			}
		}
		if(non==false){
			cout<<"Test #"<<c<<": Symmetric."<<endl;
		}
	}
}
