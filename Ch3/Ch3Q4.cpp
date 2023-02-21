#include <iostream>
using namespace std;


int main1() {


	int b;


	cout << "How many books do ypu want to purchase in this mounth?\n";
	cin >> b;


    switch (b) {
    case 0:
        cout << "You earned  0 point, have a great day\n";
        break;
    case 1:
        cout << "You earned 5 point, have a great day\n";
        break;
    case 2:
        cout << "You earned  15 point, have a great day\n";
        break;
    case 3:
        cout << "You earned  30 point, have a great day\n";
        break;
   
    default:
        cout << "You earned  60 point, have a great day\n";
    }



    return 0;



}




