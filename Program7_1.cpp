/*

Payroll Program with Input Validation

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 3/23/2022

User enter employees hourly rate and amount of hours worked, then displays employees gross pay.

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>


//Use standard namespace
using namespace std;

//Declare Functions and Modules
double grossPay(double payRate, double hours);

//Begin Main Module
int main()
{


    //Display Header
    cout << "                   Payroll Calculator                " << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << endl;

    //Declare Variables
    double payRate = -1;
    double hours = -1;

    //Input Validation loop for payRate
    while(payRate < 7.50 || payRate > 18.25)
    {
        //Get user input
        cout << "Enter Employee Pay Rate: $";
        cin >> payRate;
        cout << endl;

        //If input is invalid, display error message
        if(payRate < 7.50 || payRate > 18.25)
        {
            //Error message
            cout << "Pay Rate cannot be less than $7.50 or more than $18.25" << endl;
            cout << endl;
        }
    }

    //Input validation loop for hours
    while(hours < 0 || hours > 40)
    {
        //Get user input
        cout << "Enter Number of Hours Worked: ";
        cin >> hours;
        cout << endl;

        //If input is invalid, display error message
        if(hours < 0 || hours > 40)
        {
            //Error message
            cout << "Error! Hours worked cannot be less than 0 or more than 40" << endl;
            cout << endl;
        }
    }

    //Calculate gross pay by calling grossPay function
    double employeePay = grossPay(payRate, hours);

    //Display information put in by user and calculated results
    cout << "-----------------------------------------------------" << endl;
    cout << "           Hourly Rate: " << "$" << setprecision(2) << fixed  << payRate << endl;
    cout << "           Hours Worked: " << setprecision(1) << hours << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "              Gross Pay: " << "$" << setprecision(2) << fixed << employeePay << endl;

    return 0;
}

//Begin grossPay Function
double grossPay(double payRate, double hours)
{
    //Multiply payRate by the number of hours worked
    double result = payRate * hours;

    //return results to main
    return result;
}
