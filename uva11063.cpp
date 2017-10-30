#include <iostream>
#include <vector>
using namespace std;
int main() {
	int num;
	int Case = 1;
	while (cin >> num) {
		vector<int>nums;
		bool right = true;
		for (int i = 0; i<num; i++) {
			int a;
			cin >> a;
			nums.push_back(a);
		}
		for (int i = 0; i<num - 1; i++) {
			if (nums[i] >= nums[i + 1]) {
				right = false;
				break;
			}
		}
		if (right == true) {
			for (int i = 0; i<num; i++) {
				for (int j = i; j<num; j++) {
					for (int c = i; c<num; c++) {
						if (c == i) {
							if (j != num - 1) {
								for (int d = j + 1; d<num; d++) {
									if (nums[i] + nums[j] == nums[c] + nums[d]) {
										right = false;
										break;
									}
								}
							}
							else {
								continue;
							}
						}
						else {
							for (int d = c; d<num; d++) {
								if (nums[i] + nums[j] == nums[c] + nums[d]) {
									right = false;
									break;
								}
							}
						}
						if (right == false) {
							break;
						}
					}
					if (right == false) {
						break;
					}
				}
				if (right == false) {
					break;
				}
			}
		}
		if (right == false) {
			cout << "Case #" << Case << ": It is not a B2-Sequence." << endl;
		}
		else {
			cout << "Case #" << Case << ": It is a B2-Sequence." << endl;
		}
		cout << endl;
		Case++;
	}




}