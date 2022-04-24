/*

Amount Paid Over Time

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 2/17/2022

Displays total amount of car payments made.

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - Adds "fixed << setprecision" functionality
#include <iomanip>

//Use standard namespace
using namespace std;

//Main function entry point
int main() {

    //Declare variable for input
    double amountPaid, monthsPaid, totalAmount;

    //Get user input
    cout << "____________________________________________" << endl;
    cout << "TOTAL AMOUNT PAID FOR CAR PAYMENTS!" << endl;
    cout << "____________________________________________" << endl;
    cout << endl;
    cout << "What is your monthly car payment?: $";
    cin >> amountPaid;
    cout << "____________________________________________" << endl;
    cout << "How many months have you made this payment?: ";
    cin >> monthsPaid;
    cout << "____________________________________________" << endl;
    cout << endl;

    //Calculate Total Amount Paid
    totalAmount = amountPaid * monthsPaid;

    //Display Total Amount Paid
    cout << fixed << setprecision(2) << "Total Amount Paid: $" << totalAmount << endl;
    cout << "____________________________________________" << endl;

}
