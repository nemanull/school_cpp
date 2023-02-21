#include <iostream>
using namespace std;



int main3() {
	double p;
	double v;

	cout << "Enter the value of your pounds\n";

	cin >> v;


	if (v <= 2) {
		p = 1.10;
	}
	else if (v >= 2 && v <= 6) {
		p = 2.20;
	}
	else if (v >= 9 && v <= 10) {
		p = 2.20;
	}
	else if (v > 10) {
		p = 3.80;
	}

	cout << "You have to pay " << v * p << "$" << " for " << v << " pounds";









	return 0;
}











