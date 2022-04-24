/*

Property Tax

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 2/21/2022

This program asks for the actual value of a piece of property,
and displays the assessment value and property tax.

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Use standard namespace
using namespace std;

//Declare displayValues to use as a module
void displayValues (double actualValue);
void displayError();

//Main function entry point
int main()
{
    //Declare variables
    double actualValue;

    //Program Header
    cout << "Assessment Value & Property Tax Calculator" << endl;
    cout << "-----------------------------------------" << endl;

    //Get User Input
    cout << "Enter Actual Property Value: $";
    cin >> actualValue;
    cout << endl;

    //Throw error if inputs are invalid
    if ( actualValue < 1) {
        //send values to displayError Module
        displayError();
    } else {
        //Send values to DisplayValues Module
        displayValues (actualValue);
    }

    return 0;
}

//Display Output in a new module
void displayValues (double actualValue) {

    //Display Assessment Value and Property Tax Values
    cout << "-----------------------------------------" << endl;
    cout << fixed << setprecision(2) << setw(20) << "Assessment Value: $" << setw(11)<< right << actualValue * .6 << endl;
    cout << fixed << setprecision(2) << setw(20) << "Property Tax: $" << setw(11) << right << (actualValue * .6) * .0064 << endl;
    cout << "-----------------------------------------" << endl;

}

//Begin displayError Module
void displayError () {

    //Display Error
    cout << "             ERROR! Invalid Input!           " << endl;
    cout << "             Minimum Value is: $1            " << endl;
    cout << "---------------------------------------------" << endl;

}
