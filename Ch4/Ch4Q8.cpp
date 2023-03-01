#include <iostream>
using namespace std;






int main5() {

	double d;
	double m = 0;


	cout << "How many days\n";
	cin >> d;

	for (double i = 1, q = 0; i <= d; i++) {
		if (q <= 1) {
			q = q + 1;
			cout << "In day number " << i << " you got " << q << " penny" << endl;
			m = m + q;
			
		}
		else {
			q = q * 2;
			cout << "In day number " << i << " you got " << q << " penny" << endl;

			m = m + q;
			if (i == d) {
				cout <<"In total you got " << (m / 100) << "$" << endl;
			}
			
		}
	}






	return 0;
}




























