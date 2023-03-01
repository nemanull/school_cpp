#include <iostream>
using namespace std;



int main() {



	int a;
	string x = "X";

	cout << "Enter number between 1 and 15\n";
	cin >> a;

	if (a <= 15 and a >=1 ) {
		if (a == 1) {
			cout << "X" << endl;
		}
		else {
			for (int i = 2; i <= a; i++) {
				x = x + "X";
			}
			for (int l = 1; l <= a; l++) {
				cout << x << endl;
			}
		}

	}
	else {
		cout << "Incorrect value\n";
	}



}










