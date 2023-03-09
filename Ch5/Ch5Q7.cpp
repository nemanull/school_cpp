#include <iostream>
using namespace std;



double presentValue(double futureValue, double interestRate, int years) {
    double presentValue = futureValue / pow(1 + interestRate, years);
    return presentValue;
}

int main() {
    double futureValue, interestRate;
    int years;

    cout << "Enter the future value: ";
    cin >> futureValue;

    cout << "Enter the annual interest rate (as a decimal): ";
    cin >> interestRate;

    cout << "Enter the number of years: ";
    cin >> years;

    double present = presentValue(futureValue, interestRate, years);
    cout << "The amount you need to deposit today is $" << present << endl;

    return 0;
}