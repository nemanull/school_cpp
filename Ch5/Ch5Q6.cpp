#include <iostream>
using namespace std;









// Function to calculate base charges for hospital stay
double calcStayCharges(int days) {
    return 350 * days;
}


// Function to calculate total miscellaneous charges
double calcMiscCharges(double medCharges, double surgCharges, double labFees, double rehabCharges) {
    return medCharges + surgCharges + labFees + rehabCharges;
}



// Function to calculate total charges
double calcTotalCharges(double stayCharges, double miscCharges) {
    return stayCharges + miscCharges;
}



int main6() {
    int days;
    double medCharges, surgCharges, labFees, rehabCharges;

    // Get input from user
    cout << "Enter number of days spent in the hospital: ";
    cin >> days;
    cout << "Enter amount of medication charges: ";
    cin >> medCharges;
    cout << "Enter amount of surgical charges: ";
    cin >> surgCharges;
    cout << "Enter amount of lab fees: ";
    cin >> labFees;
    cout << "Enter amount of physical rehabilitation charges: ";
    cin >> rehabCharges;

    // Calculate and display total charges
    double stayCharges = calcStayCharges(days);
    double miscCharges = calcMiscCharges(medCharges, surgCharges, labFees, rehabCharges);
    double totalCharges = calcTotalCharges(stayCharges, miscCharges);
    cout << "Total charges: $" << totalCharges << endl;

    return 0;
}
