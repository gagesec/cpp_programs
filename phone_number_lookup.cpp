/*

Phone Number Lookup

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 3/30/2022

Program searches arrays to find person and displays their phone number.

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Include Directive - String Library
#include <string>

//Use standard namespace
using namespace std;

//Global Variables
string resultName;

//Declare Functions and Modules
string nameSearch(string peopleSearch, string people[], string phoneNumber[], int SIZE);

//Main function entry point
int main() {

    //Display Header
    cout << "          Phone Number Lookup            " << endl;
    cout << "-----------------------------------------" << endl;
    cout << endl;

    //Set Array Size
    const int SIZE = 7;

    //people array
    string people[SIZE] = {"Jon Gage", "Jarvis Hilltop", "Jenny Miles", "Mike Heart", "Carl Lesson", "Stephanie Irvin", "Elizabeth Ring"};

    //phone number array
    string phoneNumber[SIZE] = {"970-551-6705", "970-789-9724", "970-489-5819", "970-549-9724", "970-597-4897", "970-470-4848", "970-579-8946"};

    //Get user input
    string peopleSearch;
    cout << "Search Name: ";
    cin >> peopleSearch;

    //call nameSearch function
    string nameOut = nameSearch(peopleSearch, people, phoneNumber, SIZE);

    //output results
    cout << "Results: " << resultName << " | " << nameOut << endl;

    return 0;
}

//nameSearch Function
string nameSearch(string peopleSearch, string people[], string phoneNumber[], int SIZE)
{
    //Start search loop
    for(int i = 0; i < SIZE; i++)
    {
        //string .find search algorithm
        if(people[i].find(peopleSearch) != string::npos)
        {
            //Return results back to main
            resultName = people[i];
            return phoneNumber[i];
        }
    }

    //If no name is found
    return "Name not in system!";
}
