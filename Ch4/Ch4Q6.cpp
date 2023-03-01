#include <iostream>
using namespace std;



int main3() {

	//int y;
	//int m;

	//cout << "How many year\n";
	//cin >> y;

	//
	//for (int i = 1; i <= y; i++) {

	//	for (int u = 1; u <= 12; u++) {
	//		cout << "Enter the value of rainfall in mounth " << u << endl ;
	//		cin >> m;
	//	}

	//}


    int years;
    double inches, total_inches = 0;
    int mon = 12;
    double average;


    cout << "Enter the number of years: ";
    cin >> years;



    for (int y = 1; y <= years; y++) {
        for (int month = 1; month <= mon; month++) {
            cout << "Enter the inches of rainfall for year " << y << ", month " << month << ": ";
            cin >> inches;
            total_inches += inches;
        }
    }





    int total_months = years * mon;
    average = total_inches / total_months;

    cout << "Number of months: " << total_months << endl;
    cout << "Total inches of rainfall: " << total_inches << endl;
    cout << "Average rainfall per month: " << average << endl;


	return 0;
}






















