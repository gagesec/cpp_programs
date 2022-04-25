/*

Calculating the Factorial of a Number

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 3/11/2022

User enters a nonnegative integer and then the program
displays the factorial of that number.

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulator
#include <iomanip>

//Use standard namespace
using namespace std;

//Declare Variables
void calInput();


//Main function entry point
int main()
{
    //Display Header
    cout << "  Calculating the Factorial of a Number  " << endl;
    cout << "-----------------------------------------" << endl;
    cout << "   Enter a nonnegative integer and see   " << endl;
    cout << "      the factorial of that number!      " << endl;
    cout << "-----------------------------------------" << endl;
    cout << endl;

    //Send User To Display Values Module
    calInput();

    return 0;
}

//Begin Calculation Module
void calInput()
{

    //Declare Variables
    int nonInt, factNum = 1;

    //Get User Input
    cout << setw(5) << "Enter Non-Negative Integer: ";
    cin >> nonInt;
    cout << endl;
    cout << "-----------------------------------------" << endl;

    //Calculate and Display Factorial Number
    cout << setw(5)
         << nonInt << "!" << " = ";

    //Begin Calculation Loop
    for(int i = 1; i <= nonInt; i++)
    {
        //Formula for calculating Factorial
        factNum = factNum * i;
        cout <<  i << " x ";
    }

    //Display Factorial Total
    cout << " = " << factNum << endl;
    cout << "-----------------------------------------" << endl;
}

