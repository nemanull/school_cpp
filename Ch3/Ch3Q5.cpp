#include <iostream>
using namespace std;




int main2() {

	double p;

	cout << "Enter the price of all purchases\n";
	cin >> p;
	

	if ( p > 0 ) {
		if ( p >= 10 && p <= 19) {
			cout << "Tour discount is 20%\n";
			cout << "You have to pay " << (p/100)*80 << "$\n";

		}
		else if (p >= 20 && p <= 49) {
			cout << "Tour discount is 30%\n";
			cout << "You have to pay " << (p / 100) * 70 << "$\n";
		}
		else if (p >= 40 && p <= 99) {
			cout << "Tour discount is 40%\n";
			cout << "You have to pay " << (p / 100) * 60 << "$\n";
		}
		else if (p >= 100) {
			cout << "Tour discount is 50%\n";
			cout << "You have to pay " << (p / 100) * 50 << "$\n";
		}
		
	}
	else {
		cout << "You can't enter negative value\n";
	}











	return 0;

}





























