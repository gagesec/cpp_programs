/*

Paint Job Estimator

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 2/23/2022

Calculates the costs and items needed for a paint job.

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Use standard namespace
using namespace std;

//Declare Module Variables
void displayError ();
void displayValues (int everySF, int paintGal, int squareFeet,
                    double paintPrice, double hourlyRate);

//Main function entry point
int main()
{
    //Declare Variables
    int everySF, paintGal, squareFeet;
    double paintPrice, hourlyRate;

    //Defaults
    everySF = 115;
    paintGal = 1;
    hourlyRate = 20;

    //Display Header
    cout << setw (30) << "  PAINT JOB CALCULATOR  " << endl;
    cout << endl;
    cout << "------------------------------------" << endl;
    //Get User Input
    cout << setw(20) << "Enter Total Squarefeet: ";
    cin >> squareFeet;
    cout << endl;
    cout << setw(20) << "Enter paint price(per gal): $";
    cin >> paintPrice;
    cout << endl;
    cout << "------------------------------------" << endl;

    //Throw an error is invalid numbers are entered
    if ( squareFeet < 50 || paintPrice < 0){
        //Send user to displayError Module
        displayError ();
    } else {
        //Send Values to displayValues Module
        displayValues (everySF, paintGal, squareFeet,
                   paintPrice, hourlyRate);
    }

    return 0;
}

//Begin displayValues Module
void displayValues (int everySF, int paintGal, int squareFeet,
                    double paintPrice, double hourlyRate) {


    //Calculate and display Gallons of Paint required
    if ((squareFeet * paintGal) / everySF < 1) {
        paintGal = 1;
        cout << setw(31) << "Gallons of paint required:  " << paintGal << endl;
    } else {
        cout << setw(31) << "Gallons of paint required:  " << (squareFeet * paintGal) / everySF << endl;
    }

    //Calculate and display Hours of labor required
    if ((squareFeet * 8) / everySF < 8) {
        //Display minimum 8 hours of labor required, else perform normal calculations
        cout << setw(31) << "  Hours of labor required:  " << "8" << endl;
    } else {
        cout << setw(31) << "  Hours of labor required:  " << (squareFeet * 8) / everySF << endl;
    }

    //Calculate and display Cost of paint
    if (((squareFeet * paintGal) / everySF) * paintPrice < paintPrice) {
        //Set minimum to price the price of 1 gallon of paint if less than 1 gallon will be used, else perform normal calculations
        cout << fixed << setprecision(2) << setw(31) << "Cost of paint: $" << paintPrice << endl;
    } else {
        cout << fixed << setprecision(2) << setw(31) << "Cost of paint: $" << ((squareFeet * paintGal) / everySF) * paintPrice << endl;

    }

    //Calculate and display Labor charges
    if ((hourlyRate * ((squareFeet * 8) / everySF)) < 160) {
       //set minimum labor charge of 8 hours at the hourly rate, else perform normal calculations
       cout << fixed << setprecision(2) << setw(31) << "Labor charges: $" << (hourlyRate * 8) << endl;
    } else {
       cout << fixed << setprecision(2) << setw(31) << "Labor charges: $" << (hourlyRate * ((squareFeet * 8) / everySF)) << endl;
    }

    //Calculate and display Total cost of paint job
    if (squareFeet < 115) {
        //Set Minimum charge is squareFeet is less than 115, else perform normal calculation
        cout << fixed << setprecision(2) << setw(31) << "Total cost of paint job: $" << (hourlyRate * 8) + paintPrice;
    } else {
        cout << fixed << setprecision(2) << setw(31) << "Total cost of paint job: $" << (((squareFeet * paintGal) / everySF) * paintPrice) +  (hourlyRate * ((squareFeet * 8) / everySF));
    }

    cout << endl;
    cout << "------------------------------------" << endl;

}

//Begin displayError Module
void displayError () {
    cout << setw(30) << "ERROR: One or more inputs is invalid!" << endl;
    cout << endl;
    cout << setw(30) <<  "Squarefeet minimum is: 50" << endl;
    cout << setw(30) <<  "Paint price minimum is: $0" << endl;
    cout << endl;
    cout << "------------------------------------" << endl;
}


