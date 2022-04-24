/*

Monthly Sales Tax

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 2/24/2022

Calculates County and State Tax from Monthly Total Sales

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Use standard namespace
using namespace std;

//Declare Module Variables
void displayValues(double &totalSales);
void displayError();

//Main function entry point
int main()
{
    //Declare Variables
    double totalSales;

    //Display Header
    cout << "         Monthly Sales Tax Calculator        " << endl;
    cout << "---------------------------------------------" << endl;
    cout << endl;
    cout << "Enter total sales for this month: $";
    cin >> totalSales;
    cout << endl;
    cout << "---------------------------------------------" << endl;

    //Throw error if invalid inputs are entered
    if (totalSales < 1) {
        //send to displayError Module
        displayError();
    } else {
        //send to displayValues Module
        displayValues(totalSales);
    }

    return 0;
}

//Begin displayValues Module
void displayValues (double &totalSales) {

    //Declare Variables
    double countTax, stateTax;

    //Default Values
    countTax = 0.02;
    stateTax = 0.04;

    //Calculate and display Tax Values
    cout << fixed << setprecision(2) << " County Tax: $" << setw(5) << right << totalSales * countTax << endl;
    cout << fixed << setprecision(2) << "  State Tax: $" << setw(5) << right << totalSales * stateTax << endl;
    cout << "---------------------------------------------" << endl;
    cout << fixed << setprecision(2) << "  Total Tax: $" << setw(5) << right << (totalSales * countTax) + (totalSales * stateTax) << endl;
    cout << endl;
    cout << "---------------------------------------------" << endl;

}

//Begin displayError Module
void displayError () {

    //Display Error
    cout << "             ERROR! Invalid Input!           " << endl;
    cout << "             Minimum Value is: $1            " << endl;
    cout << "---------------------------------------------" << endl;

}


