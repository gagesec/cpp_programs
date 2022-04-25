/*

First & Last

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 3/10/2022

User enters a series of Peoples name, then types END to see the
first name alphabetically and the last name alphabetically.

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
    cout << "              First & Last               " << endl;
    cout << "-----------------------------------------" << endl;
    cout << "    Enter Peoples Names. Then type END   " << endl;
    cout << "to see first and last alphabetical names " << endl;
    cout << "-----------------------------------------" << endl;
    cout << endl;

    //Send User To Display Values Module
    userInput();

    return 0;
}

void userInput()
{

    //Declare Variables and set first and last values on the opposite end of the alphabet
    string current, first = "z", last = "A";

    //Get user input
    while(current != "END")
    {
        cout << "Enter Name: ";
        getline(cin, current);
        cout << endl;

        //Calculates first name alphabetically
        if (current < first && current != "END")
        {
            first = current;
        }

        //Calculates last name alphabetically
        if (current > last && current != "END")
        {
            last = current;
        }
    }

    //Display first and last alphabetical values
    cout << "-----------------------------------------" << endl;
    cout << endl;
    cout << " First: " << first << endl;
    cout << "  Last: " << last << endl;
    cout << endl;
    cout << "-----------------------------------------" << endl;

}

