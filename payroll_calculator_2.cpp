/*

Payroll

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 4/4/2022

User enters pay rate and hours for each employee ID, the program then calculates
and displays each employees ID and employees gross pay.

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Include Directive - String Library
#include <string>

//Use standard namespace
using namespace std;

//Declare Functions and Modules
void grossPayCalc(int hours[], double payRate[], double wages[], int SIZE);

//Main function entry point
int main() {

    //Display Header
    cout << "                 Payroll                 " << endl;
    cout << "-----------------------------------------" << endl;
    cout << endl;

    //Config - Set Array SIZE
    const int SIZE = 7;

    //Declare Arrays
    int empId[SIZE] = {56588, 45201, 78951, 87775, 84512, 13028, 75804};
    int hours[SIZE];
    double payRate[SIZE];
    double wages[SIZE];

    //Start User Input Loop
    for(int i = 0; i < SIZE; i++)
    {
        //Display Employee ID
        cout << "       Employee ID: " << empId[i] << endl;

        //Get Employee Pay Rage
        cout << "    Enter Pay Rate: $";
        cin >> payRate[i];

        //Get Employee Hours
        cout << "Enter Hours Worked: ";
        cin >> hours[i];
        cout << endl;

        //Input Validation
        if(payRate[i] < 1 || hours[i] < 1)
        {
            cout << "Error! One or more inputs are invalid!" << endl;
            i--;
        }
    }

    //Calculates employees gross wages
    grossPayCalc(hours, payRate, wages, SIZE);

    //Begin Employee ID/Gross Wages display loop
    for(int i = 0; i < SIZE; i++)
    {
        //Format Output
        cout << endl;
        cout << "-----------------------------------------" << endl;
        cout << "       Employee ID: " << empId[i] << endl;
        cout << setprecision(2) << fixed << "         Gross Pay: $" << wages[i] << endl;
    }
        //Display Footer
        cout << "-----------------------------------------" << endl;

    return 0;
}

//Begin grossPayCalc Module
void grossPayCalc(int hours[], double payRate[], double wages[], int SIZE)
{
    //Start Calculation Loop
    for(int i = 0; i < SIZE; i++)
    {
        //Calculates all of Employees gross wages in array
        wages[i] = hours[i] * payRate[i];
    }
}

