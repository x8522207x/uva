#include <iostream>
#include <string>
using namespace std;
int main(){
	int Case;
	cin >> Case;
	while (Case--){
		//1/2 monday
		int month;
		int day;
		cin >> month >> day;
		if (month == 1){ 
			if (day % 7 == 3){
				cout << "Monday" << endl; 
			} 
			else if (day % 7 == 4){
				cout << "Tuesday" << endl;
			}
			else if (day % 7 == 5){
				cout << "Wednesday" << endl;
			}
			else if (day % 7 == 6){
				cout << "Thursday" << endl;
			}
			else if (day % 7 == 0){
				cout << "Friday" << endl;
			}
			else if (day % 7 == 1){
				cout << "Saturday" << endl;
			}
			else if (day % 7 == 2){
				cout << "Sunday" << endl;
			}
		}
		else if (month == 2){
			day = day + 31;
			if (day % 7 == 3){
				cout << "Monday" << endl;
			}
			else if (day % 7 == 4){
				cout << "Tuesday" << endl;
			}
			else if (day % 7 == 5){
				cout << "Wednesday" << endl;
			}
			else if (day % 7 == 6){
				cout << "Thursday" << endl;
			}
			else if (day % 7 == 0){
				cout << "Friday" << endl;
			}
			else if (day % 7 == 1){
				cout << "Saturday" << endl;
			}
			else if (day % 7 == 2){
				cout << "Sunday" << endl;
			}
		}
		else if (month == 3){
			day = day + 31 + 28;
			if (day % 7 == 3){
				cout << "Monday" << endl;
			}
			else if (day % 7 == 4){
				cout << "Tuesday" << endl;
			}
			else if (day % 7 == 5){
				cout << "Wednesday" << endl;
			}
			else if (day % 7 == 6){
				cout << "Thursday" << endl;
			}
			else if (day % 7 == 0){
				cout << "Friday" << endl;
			}
			else if (day % 7 == 1){
				cout << "Saturday" << endl;
			}
			else if (day % 7 == 2){
				cout << "Sunday" << endl;
			}
		}
		else if (month == 4){
			day = day + 31 + 28 + 31;
			if (day % 7 == 3){
				cout << "Monday" << endl;
			}
			else if (day % 7 == 4){
				cout << "Tuesday" << endl;
			}
			else if (day % 7 == 5){
				cout << "Wednesday" << endl;
			}
			else if (day % 7 == 6){
				cout << "Thursday" << endl;
			}
			else if (day % 7 == 0){
				cout << "Friday" << endl;
			}
			else if (day % 7 == 1){
				cout << "Saturday" << endl;
			}
			else if (day % 7 == 2){
				cout << "Sunday" << endl;
			}
		}
		else if (month == 5){
			day = day + 31 + 28 + 31+30;
			if (day % 7 == 3){
				cout << "Monday" << endl;
			}
			else if (day % 7 == 4){
				cout << "Tuesday" << endl;
			}
			else if (day % 7 == 5){
				cout << "Wednesday" << endl;
			}
			else if (day % 7 == 6){
				cout << "Thursday" << endl;
			}
			else if (day % 7 == 0){
				cout << "Friday" << endl;
			}
			else if (day % 7 == 1){
				cout << "Saturday" << endl;
			}
			else if (day % 7 == 2){
				cout << "Sunday" << endl;
			}
		}
		else if (month == 6){
			day = day + 31 + 28 + 31 + 30+31;
			if (day % 7 == 3){
				cout << "Monday" << endl;
			}
			else if (day % 7 == 4){
				cout << "Tuesday" << endl;
			}
			else if (day % 7 == 5){
				cout << "Wednesday" << endl;
			}
			else if (day % 7 == 6){
				cout << "Thursday" << endl;
			}
			else if (day % 7 == 0){
				cout << "Friday" << endl;
			}
			else if (day % 7 == 1){
				cout << "Saturday" << endl;
			}
			else if (day % 7 == 2){
				cout << "Sunday" << endl;
			}
		}
		else if (month == 7){
			day = day + 31 + 28 + 31 + 30 + 31+30;
			if (day % 7 == 3){
				cout << "Monday" << endl;
			}
			else if (day % 7 == 4){
				cout << "Tuesday" << endl;
			}
			else if (day % 7 == 5){
				cout << "Wednesday" << endl;
			}
			else if (day % 7 == 6){
				cout << "Thursday" << endl;
			}
			else if (day % 7 == 0){
				cout << "Friday" << endl;
			}
			else if (day % 7 == 1){
				cout << "Saturday" << endl;
			}
			else if (day % 7 == 2){
				cout << "Sunday" << endl;
			}
		}
		else if (month == 8){
			day = day + 31 + 28 + 31 + 30 + 31 + 30+31;
			if (day % 7 == 3){
				cout << "Monday" << endl;
			}
			else if (day % 7 == 4){
				cout << "Tuesday" << endl;
			}
			else if (day % 7 == 5){
				cout << "Wednesday" << endl;
			}
			else if (day % 7 == 6){
				cout << "Thursday" << endl;
			}
			else if (day % 7 == 0){
				cout << "Friday" << endl;
			}
			else if (day % 7 == 1){
				cout << "Saturday" << endl;
			}
			else if (day % 7 == 2){
				cout << "Sunday" << endl;
			}
		}
		else if (month == 9){
			day = day + 31 + 28 + 31 + 30 + 31 + 30 + 31+31;
			if (day % 7 == 3){
				cout << "Monday" << endl;
			}
			else if (day % 7 == 4){
				cout << "Tuesday" << endl;
			}
			else if (day % 7 == 5){
				cout << "Wednesday" << endl;
			}
			else if (day % 7 == 6){
				cout << "Thursday" << endl;
			}
			else if (day % 7 == 0){
				cout << "Friday" << endl;
			}
			else if (day % 7 == 1){
				cout << "Saturday" << endl;
			}
			else if (day % 7 == 2){
				cout << "Sunday" << endl;
			}
		}
		else if (month == 10){
			if (day % 7 == 3){
				day = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31+30;
				cout << "Monday" << endl;
			}
			else if (day % 7 == 4){
				cout << "Tuesday" << endl;
			}
			else if (day % 7 == 5){
				cout << "Wednesday" << endl;
			}
			else if (day % 7 == 6){
				cout << "Thursday" << endl;
			}
			else if (day % 7 == 0){
				cout << "Friday" << endl;
			}
			else if (day % 7 == 1){
				cout << "Saturday" << endl;
			}
			else if (day % 7 == 2){
				cout << "Sunday" << endl;
			}
		}
		else if (month == 11){
			day = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30+31;
			if (day % 7 == 3){
				cout << "Monday" << endl;
			}
			else if (day % 7 == 4){
				cout << "Tuesday" << endl;
			}
			else if (day % 7 == 5){
				cout << "Wednesday" << endl;
			}
			else if (day % 7 == 6){
				cout << "Thursday" << endl;
			}
			else if (day % 7 == 0){
				cout << "Friday" << endl;
			}
			else if (day % 7 == 1){
				cout << "Saturday" << endl;
			}
			else if (day % 7 == 2){
				cout << "Sunday" << endl;
			}
		}
		else if (month == 12){
			day = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31+30;
			if (day % 7 == 3){
				cout << "Monday" << endl;
			}
			else if (day % 7 == 4){
				cout << "Tuesday" << endl;
			}
			else if (day % 7 == 5){
				cout << "Wednesday" << endl;
			}
			else if (day % 7 == 6){
				cout << "Thursday" << endl;
			}
			else if (day % 7 == 0){
				cout << "Friday" << endl;
			}
			else if (day % 7 == 1){
				cout << "Saturday" << endl;
			}
			else if (day % 7 == 2){
				cout << "Sunday" << endl;
			}
		}

	}





}