#include <iostream>
#include <vector>
using namespace std;
int main(){
	int Case=0;
	cin>>Case;
	cin.ignore();
	cin.ignore();
	for(int c=1;c<=Case;c++){
		string s;
		cout<<"Case #"<<c<<":"<<endl;
		while(getline(cin,s) && s.length()!=0){
			vector<string>letters;
			string word;
			int no=0;
			for(int i=0;i<s.length();i++){
				if(s[i]!=' '){
					word+=s[i];
				}else if(s[i]==' '|| i==s.length()-1){
					if(word.length()>0){
						letters.push_back(word);
						word="";
					}
				}
			}
			letters.push_back(word+" ");
			for(int i=0;i<letters.size();i++){
				if(letters[i].length()-1>=no){
					if(letters[i][no]!=' '){
						cout<<letters[i][no];
						no++;
					}
				}
			
			}
			cout<<endl;
		}
		if(c!=Case){
			cout<<endl;
		}
	}
}
