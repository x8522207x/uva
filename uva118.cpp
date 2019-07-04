#include <iostream>
using namespace std;
int main() {
	int path[51][51] = { 0 };
	string ins;
	int a, b;
	cin >> a >> b;
	int x, y;
	string e;
	while (cin >> x >> y >> e) {
		cin >> ins;
		bool Lost = false;
		for (int i = 0; i < ins.size(); i++) {
			if (ins[i] == 'R') {
				if (e == "N") {
					e = "E";
				}else if (e == "S") {
					e = "W";
				}
				else if (e == "W") {
					e = "N";
				}
				else if (e == "E") {
					e = "S";
				}
			}else if (ins[i] == 'L') {
				if (e == "N") {
					e = "W";
				}
				else if (e == "S") {
					e = "E";
				}
				else if (e == "W") {
					e = "S";
				}
				else if (e == "E") {
					e = "N";
				}
			}
			else if (ins[i] == 'F') {
				if (e == "N") {
					y++;
					if (y > b) {
						if (path[x][y - 1] == 1) {
							y=b;
						}
						else if (path[x][y - 1] == 0) {
							cout << x << " " << y - 1 << " " << e << " LOST" << endl;
							path[x][y - 1] = 1;
							Lost = true;
							break;
						}
					}
				}
				else if (e == "S") {
					y--;
					if (y < 0) {
						if (path[x][y + 1] == 1) {
							y=0;
						}
						else if (path[x][y + 1] == 0) {
							cout << x << " " << y + 1 << " " << e << " LOST" << endl;
							path[x][y + 1] = 1;
							Lost = true;
							break;
						}
					}
				}
				else if (e == "W") {
					x--;
					if (x < 0) {
						if (path[x + 1][y] == 1) {
							x=0;
						}
						else if (path[x + 1][y] == 0) {
							cout << x + 1 << " " << y << " " << e << " LOST" << endl;
							path[x + 1][y] = 1;
							Lost = true;
							break;
						}
					}
				}
				else if (e == "E") {
					x++;
					if (x > a) {
						if (path[x - 1][y] == 1) {
							x=a;
						}
						else if (path[x - 1][y] == 0) {
							cout << x - 1 << " " << y << " " << e << " LOST" << endl;
							path[x - 1][y] = 1;
							Lost = true;
							break;
						}
					}
				}
			}
		}
		if (Lost == false) {
			cout << x << " " << y << " " << e << endl;
		}
	}
}
