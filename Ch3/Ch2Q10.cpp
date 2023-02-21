#include <iostream>
using namespace std;



int main() {

	double nu = 1000;
	double share1 = 32.87;
	double share2 = 33.92;
	double broker1 = (share1 / 100) * 2; 
	double broker2 = (share2 / 100) * 2;

	double p = nu * (share1 - broker1);
	double g = nu * (share2 - broker2);


	cout << "Welcome in Acme Software's account\n";
	cout << "----------------------------------\n";
	cout << "You bought 1000 shares for 32.87 per share. You spend " << share1 * nu << "$" << " on shares and paid " << broker1 * nu << "$" << "  commission." << endl ;
	cout << "In general you spend " << p << "$\n";
	cout << "----------------------------------\n";
	cout << "You sold 1000 shares for 33.92 per share. You got " << share2 * nu << "$" << " on shares and paid " << broker1 * nu << "$" << "  commission." << endl;
	cout << "You get a " << g << "$\n";
	cout << "----------------------------------\n";
	cout << "Your profit is  " << g - p << "$";
	







	return 0;
};













