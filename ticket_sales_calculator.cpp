/*

Stadium Seating

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 2/22/2022

This programs asks for how many tickets were sold for class A, B, and C,
then displays the income generated from ticket sales.

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Use standard namespace
using namespace std;

//Declare Modules Variables
void displayError();
void displayValues (int classAAmount, int classBAmount, int classCAmount,
                    double classA, double classB, double classC);

//Main function entry point
int main()
{
    //Declare Variables
    int classAAmount, classBAmount, classCAmount;
    double classA, classB, classC;

    //Set Ticket Prices
    classA = 15;
    classB = 12;
    classC = 9;

    //Display Header
    cout << "       TICKET SALES CALCULATOR      " << endl;
    cout << endl;
    cout << "------------TICKET PRICES-----------" << endl;
    cout << "    Class A Ticket: $" << classA << endl;
    cout << "    Class B Ticket: $" << classB << endl;
    cout << "    Class C Ticket: $" << classC << endl;
    cout << "------------------------------------" << endl;
    cout << endl;

    //Get User Input
    cout << "ENTER NUMBER OF TICKETS SOLD" << endl;
    cout << "------------------------------------" << endl;
    cout << endl;
    cout << "Class A tickets sold: ";
    cin >> classAAmount;
    cout << endl;
    cout << "Class B tickets sold: ";
    cin >> classBAmount;
    cout << endl;
    cout << "Class C tickets sold: ";
    cin >> classCAmount;
    cout << endl;
    cout << "------------------------------------" << endl;
    cout << endl;

    //Throw an error if invalid numbers are entered
    if ( classAAmount < 1 || classBAmount < 1 || classCAmount < 1 ) {
        //Send user to displayError Module
        displayError();
    } else {
        //Send Values to displayValues Module
        displayValues (classAAmount, classBAmount, classCAmount,
                       classA, classB, classC);
    }

    return 0;
}

//Begin displayValues Module
void displayValues (int classAAmount, int classBAmount, int classCAmount,
                    double classA, double classB, double classC) {

    //Calculate and display income generated
    cout << fixed << setprecision(2) << setw (10) << "  Income Generated: $" << (classA * classAAmount) + (classB * classBAmount) + (classC * classCAmount) << endl;
    cout << endl;
    cout << "------------------------------------" << endl;


}

//Begin Display Error Module
void displayError () {
    cout << setw(30) << "ERROR: One or more inputs is invalid!" << endl;
    cout << endl;
    cout << setw(30) <<  "Tickets Sold minimum is: 1" << endl;
    cout << endl;
    cout << "------------------------------------" << endl;

}

