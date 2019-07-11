#include <iostream>
using namespace std;
int main(){
	string before="\\][POIUYTREW';LKJHGFDS/.,MNBVCX=-0987654321 ", after="][POIUYTREWQ;LKJHGFDSA.,MNBVCXZ-0987654321` ", s;
	while(getline(cin,s)){
		for(int i=0;i<s.length();i++){
			for(int j=0;j<before.length();j++){
				if(s[i]==before[j]){
					s[i]=after[j];
					break;
				}
			}
		}
		cout<<s<<endl;
	}
}
