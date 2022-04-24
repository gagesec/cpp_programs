/*

Pennies for Pay

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 3/7/2022

calculates amount of money person would make overtime if they
started with one penny and it doubled every day.

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Use standard namespace
using namespace std;

//Declare Variables
void displayValues(int numDays);
void displayError();
int numDays, dayCounter;
double amountPerDay;


//Main function entry point
int main()
{
    //Display Header
    cout << "            Pennies for Pay             " << endl;
    cout << "----------------------------------------" << endl;
    cout << "  See how much money you would make if  " << endl;
    cout << " you doubled your daily income everyday " << endl;
    cout << "       starting with just 1 penny!      " << endl;
    cout << "----------------------------------------" << endl;
    cout << endl;


    //Get User Input
    cout << "   Enter Number of Days: ";
    cin >> numDays;
    cout << endl;
    cout << "----------------------------------------" << endl;
    cout << setw(5) << " DAY | AMOUNT" << endl;

    //Throw error if input is invalid
    if (numDays < 1 || numDays > 365)
        {

        //Send to Error Module
        displayError();
        } else
        {

            //Send to displayValues Module
            displayValues(numDays);
        }

    return 0;
}

//Begin Display Values Module
void displayValues(int numDays)
{

    //Set Variables
    int dayCounter = 0;
    double amountPerDay = 0.01;

    //Increment Days and calculate amount per day to double each day
    while (dayCounter < numDays)
    {
        //Add One day and double amount per loop
        dayCounter++;
        amountPerDay = amountPerDay * 2;

        //Display Output
        cout << setw(5) << right << fixed << setprecision(2)
             << dayCounter << "| " << "$" << amountPerDay
             << endl;
    }
}

//Begin Error Module
void displayError()
{

    cout << endl;
    cout << "ERROR! Input is invalid!" << endl;
    cout << "Minimum Number of Days: 1" << endl;
    cout << "Maximum Number of Days: 365" << endl;

}

