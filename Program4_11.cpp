/*

Magic Dates

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 3/4/2022

Tells the user if the date entered is a magic date or not.

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Use standard namespace
using namespace std;

//Declare Variables
void displayValues(int day, int month, int year);
void displayError();
void makeDecision();
int day, month, year;


//Main function entry point
int main()
{
    //Display Header
    cout << "             Magic Dates                " << endl;
    cout << "----------------------------------------" << endl;
    cout << "   Enter Date to see if date is magic!  " << endl;
    cout << "          Month X Day = Year            " << endl;
    cout << "           Format: 12/2/24              " << endl;
    cout << "----------------------------------------" << endl;
    cout << endl;


    //Get User Input
    cout << "Enter Month: ";
    cin >> month;
    cout << endl;
    cout << "Enter Day: ";
    cin >> day;
    cout << endl;
    cout << "Enter Year: ";
    cin >> year;
    cout << endl;
    cout << "----------------------------------------" << endl;


    //Apply date format conditions and throw error if input is invalid
    if  (
            //Months that have 31 days
        ((month == 4||month == 6||month == 8||month == 10||month == 12) && day > 31)

           //Months that have 30 days
        ||((month == 1||month == 3||month == 5||month == 7 ||month == 9|| month == 11) && day > 30)

           //February
        ||((month == 2) && day > 28)

           //Add Min and Max numbers for Day, Month, and Year
        || (day < 1)
        || (month < 1)
        || (month > 12)
        || (year < 1)
        || (year > 99)
        )
        {

        //Send to displayError Module
        displayError();

    } else {

        //Send to displayValues Module
        displayValues(month, day, year);
    }

    return 0;
}

//Being displayValues Module
void displayValues(int month, int day, int year) {

    cout << endl;
    //Calculate Date to see if it is magical
    if ( (day * month) == year) {

        //Date is magical
        if (year < 10){
            cout << "Date Entered: " << day << "/" <<  month <<  "/0" << year << endl;
        } else {
            cout << "Date Entered: " << day << "/" <<  month <<  "/" << year << endl;
        }
        cout << endl;
        cout << "This Date is Magical!" << endl;
        cout << endl;
        makeDecision();


    } else {

        //Date is not magical
        if (year < 10){
            cout << "Date Entered: " << day << "/" <<  month <<  "/0" << year << endl;
        } else {
            cout << "Date Entered: " << day << "/" <<  month <<  "/" << year << endl;
        }
        cout << endl;
        cout << "Sorry! But this date is not magical!" << endl;
        cout << endl;
        makeDecision();
    }

    cout << endl;
    cout << "----------------------------------------" << endl;
}

//Begin Display Error
void displayError (){
    cout << "ERROR! One or more inputs is invalid!" << endl;
    cout << endl;
    makeDecision();
}

void makeDecision(){
    string answerYN;
    cout << "Would you like to play again? [Y/N]: ";
    cin >> answerYN;

    if ( answerYN == "Y" || answerYN == "y") {

        //Clear screen and send player to main module
        system("CLS");
        main();

    } else {
        cout << endl;
        cout << "Have a great day!" << endl;

    }
}

