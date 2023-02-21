#include <iostream>
using namespace std;





int main4() {

	double w;
	double h;
	double bmi;

	cout << "Enter your weight\n";
	cin >> w;
	cout << "Enter your height (m)\n";
	cin >> h;

	bmi = w / (h * h);


	cout << "Your Body Mass Index is " << bmi << endl;
	if (bmi > 18 and bmi < 25) {
		cout << "The person have a good BMI\n";
	}
	else if (bmi < 18.5 ) {
		cout << "The person is considered to be underweight";
	}
	else if (bmi > 18) {
		cout << "The person is considered to be owerweight";
	}

	


	return 0;
}




























