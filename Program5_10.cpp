/*

Largest and Smallest

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 3/8/2022

User enters a series of number and when the user enters -99,
the numbers are displayed from largest to smallest

*/

//Include Directive - importing input/output library
#include <iostream>

//Use standard namespace
using namespace std;

//Declare Variables
void userInput();

//Main function entry point
int main()
{
    //Display Header
    cout << "          Largest and Smallest           " << endl;
    cout << "-----------------------------------------" << endl;
    cout << "      Enter numbers, then enter -99      " << endl;
    cout << " to Calculate Highest and Lowest Values! " << endl;
    cout << "-----------------------------------------" << endl;
    cout << endl;

    //Send User To Display Values Module
    userInput();

    return 0;
}

//Begin User Input Module
void userInput()
{

    //Declare Variables
    int current, max, min;

    //Get user input
    while(current != -99)
    {
        cout << "Enter Number: ";
        cin >> current;
        cout << endl;

        //Get max value
        if (current > max)
        {
            max = current;
        }
        //Get min value
        if (current < min && current != -99)
        {
            min = current;
        }
    }

    //Display max and min values
    cout << "-----------------------------------------" << endl;
    cout << endl;
    cout << " Largest Number: " << max << endl;
    cout << "Smallest Number: " << min << endl;
    cout << endl;
    cout << "-----------------------------------------" << endl;

}

