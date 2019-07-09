#include <iostream>
using namespace std;
int main(){
	string reverse="AEHIJLMOSTUVWXYZ12358", reverseA="A3HILJMO2TUVWXY51SEZ8", q;
	while(cin>>q){
		int reverI=0;
		bool reverB=false, same = true;
		for(int i=0,j=q.length()-1;i<q.length()/2;i++,j--){
			if(q[i]!=q[j]){
				for(int c=0;c<reverse.length();c++){
					if((q[i]==reverse[c] && q[j]==reverseA[c])||(q[i]==reverseA[c] && q[j]==reverse[c])){
						reverI++;
						reverB=true;
						break;
					}
				}
				if(reverB==false){
					same = false;
					cout<<q<<" -- is not a palindrome."<<endl;
					break;
				}
			}else if(q[i]==q[j]){
				for(int c=0;c<reverse.length();c++){
					if((q[i]==reverse[c] && q[j]==reverseA[c])||(q[i]==reverseA[c] && q[j]==reverse[c])){
						reverI++;
						break;
					}
				}
			}
		}
		if(reverB==true && reverI==q.length()/2){
			cout<<q<<" -- is a mirrored string."<<endl;
		}else if(reverB==false && reverI==q.length()/2){
			cout<<q<<" -- is a mirrored palindrome."<<endl;
		}else if(same==true && reverB==false){
			cout<<q<<" -- is a regular palindrome."<<endl;
		}
		cout<<endl;
	}
}
