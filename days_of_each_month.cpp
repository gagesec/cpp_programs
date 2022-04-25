/*

Days Of Each Month

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 3/30/2022

This Program displays the number of days in each month

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Use standard namespace
using namespace std;

//Declare Functions and Modules
void monthDay();

//Main function entry point
int main() {

    //Display Header
    cout << "           Days of Each Month            " << endl;
    cout << "-----------------------------------------" << endl;
    cout << endl;

    //call monthDay
    monthDay();

    //Footer
    cout << endl;
    cout << "-----------------------------------------" << endl;

    return 0;
}

//Begin monthDay module
void monthDay()
{
    //Declare variables
    int monthDays;
    const int SIZE = 12;

    //Creates string index for names of months and integer index for days of each month
    string months[SIZE] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    int days[SIZE] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    //Start Loop
    for(int i = 0; i < SIZE ; i++)
    {
        //Format and display output
        cout << setw(18) << right << months[i] << " has " << days[i] << " days." << endl;
    }
}
