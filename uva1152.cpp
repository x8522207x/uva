#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int a(vector<int>, vector<int>);
int main(){
	int Case;
	cin >> Case;
	cin.get();
	while (Case--){
		cout << endl;
		int size;
		int answer = 0;
		int now = 0;
		int m1, m2, m3, m4;
		vector<int> A;
		vector<int> B;
		vector<int> C;
		vector<int> D;
		vector<int> part1add;
		vector<int> part2add;
		vector<int> part1zero;
		vector<int> part2zero;
		vector<int> part1lose;
		vector<int> part2lose;
		cin >> size;
		
		for (int i = 0; i < size ; i++){
			cin >> m1 >> m2 >> m3 >> m4;
			A.push_back(m1);
			B.push_back(m2);
			C.push_back(m3);
			D.push_back(m4);
		}
		for (int i = 0; i < int(A.size()); i++){ 
			for (int j = 0; j < int(B.size()); j++){ 
				if (A[i] + B[j]>0){
					part1add.push_back(A[i] + B[j]); 
				}
				else if (A[i] + B[j] == 0){ 
					part1zero.push_back(A[i] + B[j]); 
				}
				else if (A[i] + B[j] < 0){
					part1lose.push_back(abs(A[i] + B[j])); 
				}
			 }
		}
		for (int h = 0; h < int(C.size()); h++){
			for (int u = 0; u < int(D.size()); u++){
				if (C[h] + D[u]>0){ 
					part2add.push_back(C[h] + D[u]); 
				}
				else if (C[h] + D[u] == 0){ 
					part2zero.push_back(C[h] + D[u]); 
				}
				else if (C[h] + D[u] < 0){ 
					part2lose.push_back(abs(C[h] + D[u])); 
				}
			}
		}
		sort(part1add.begin(), part1add.begin() + int(part1add.size()));
		sort(part2add.begin(), part2add.begin() + int(part2add.size()));
		sort(part1lose.begin(), part1lose.begin() + int(part1lose.size()));
		sort(part2lose.begin(), part2lose.begin() + int(part2lose.size()));

		answer = answer + a(part1add, part2lose);
		answer = answer + a(part2add, part1lose);
		answer = answer + int(part1zero.size())*int(part2zero.size());
		cout << answer << endl << endl;


	}

	return 0;
}
int a(vector<int>q, vector<int>p){
	int now = 0;
	int answer = 0;
	for (int i = 0; i < int(q.size()); i++){
		for (int j = 0; j < int(p.size()); j++){
			if (q[i] == p[j]){
				p.erase(p.begin() + j);
				now = 1;
				answer++;
			}
			else if (q[i] != p[j] && now == 1){  now = 0; break; }
		}
	
	}
	return answer;
}