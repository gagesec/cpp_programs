/*

Speeding Violation Calculator

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 3/25/2022

User enters speed limit and drivers current speed, the program
then calculates to see if the driver was speed and displays the
amount of MPH the driver was over the limit.

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Use standard namespace
using namespace std;

//Declare Functions and Modules
int calculate(int speedLimit, int currentSpeed);

//Begin Main Module
int main()
{


    //Display Header
    cout << "               Speed Limit Calculator                " << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << endl;

    //Declare Variables
    int speedLimit, currentSpeed;

    //Get User Input for Speed Limit
    cout << "Enter Speed Limit: ";
    cin >> speedLimit;
    cout << endl;

    //Speed Limit Validation Loop
    while(speedLimit < 20 || speedLimit > 70)
    {
        //Display Error Message
        cout << "Error! Speed Limit cannot be less than 20 or more than 70" << endl;
        cout << endl;

        //Get User Input
        cout << "Enter Speed Limit: ";
        cin >> speedLimit;
        cout << endl;
    }

    //Get User Input for Current Speed
    cout << "Enter Drivers Current Speed: ";
    cin >> currentSpeed;
    cout << endl;

    //Current Speed Validation Loop
    while (currentSpeed < speedLimit)
    {
        //Display Error Message
        cout << "Error! Drivers current speed cannot be less than " << speedLimit << endl;
        cout << endl;

        //Get User Input
        cout << "Enter Drivers Current Speed: ";
        cin >> currentSpeed;
        cout << endl;
    }

    //Calculate Function
    int outcome = calculate(speedLimit, currentSpeed);

    //If driver was going the speed limit
    if (outcome == 0)
    {
        //Display Output
        cout << "Driver was not speeding." << endl;
    }
    //If the drive was speeding
    else
    {
        //Display Output
        cout << "Driver was going (" << outcome << " MPH) over the speed limit." << endl;
    }

    //Footer
    cout << endl;
    cout << "-----------------------------------------------------" << endl;

    return 0;
}

//calculate function
int calculate(int speedLimit, int currentSpeed)
{
    //Calculate number of MPH over Speed Limit
    int result = currentSpeed - speedLimit;

    //If driver was going less that than the Speed Limit
    if(result < 0)
    {
        //Return 0 to main
        return 0;
    }

    //If driver was going over the speed limit
    else
    {
        //Return calculated results to main
        return result;
    }
}
