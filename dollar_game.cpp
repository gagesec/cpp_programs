/*

DOLLAR GAME

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 3/1/2022

Counts the change input from player and if the amount of change equals $1, the player wins!

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Use standard namespace
using namespace std;

//Declare Variables
void displayValues(double pennies, double nickels, double dimes, double quarters);
void displayError();
void displayWrong();
void decisionMaker();
double pennies, nickels, dimes, quarters, addedSum;

//Main function entry point
int main()
{
    //Display Header
    cout << "          DOLLAR GAME          " << endl;
    cout << "-------------------------------" << endl;
    cout << " RULES: Enter values for:      " << endl;
    cout << "               PENNIES         " << endl;
    cout << "               NICKELS         " << endl;
    cout << "               DIMES           " << endl;
    cout << "               QUARTERS        " << endl;
    cout << "-------------------------------" << endl;
    cout << "       SUM MUST EQUAL $1       " << endl;
    cout << "-------------------------------" << endl;

    //Get User Input
    cout << " Enter PENNIES: ";
    cin >> pennies;
    cout << endl;
    cout << " Enter NICKELS: ";
    cin >> nickels;
    cout << endl;
    cout << "   Enter DIMES: ";
    cin >> dimes;
    cout << endl;
    cout << "Enter QUARTERS: ";
    cin >> quarters;
    cout << endl;
    cout << "-------------------------------" << endl;

    //Throw Error if input is invalid
    if (pennies < 0 || nickels < 0 || dimes < 0 || quarters < 0) {
        displayError();
    } else {

    //Calculate Variables and send to applicable Module
    if ((pennies * .01) + (nickels * .05) + (dimes * .1) + (quarters * .25) == 1) {
        displayValues(pennies, nickels, dimes, quarters);
    } else {
        displayWrong();
    }
    }



    return 0;
}

//Begin Winning Module
void displayValues(double pennies, double nickels, double dimes, double quarters) {

    cout << "CONGRATS! YOU WON!" << endl;

    //Display Decision Maker Module
    decisionMaker();
}

//Begin Losing Module
void displayWrong(){

    //Display Players Actual Amount
    cout << "ADDED SUM DOES NOT EQUAL $1! TRY AGAIN!" << endl;
    cout << endl;
    cout << fixed << setprecision(2) << "          SUM: $" << (pennies * .01) + (nickels * .05) + (dimes * .1) + (quarters * .25) << endl;
    cout << endl;
    cout << "-------------------------------" << endl;

    //Display Decision Maker Module
    decisionMaker();
}

//Begin Error Module
void displayError(){
    cout << "ERROR! ONE OR MORE INPUTS IS INVALID!" << endl;
}

//Begin Decision Maker Module
void decisionMaker(){

    //Ask user if they want to play again
    cout << "Would you like to play again?" << endl;
    cout << "-------------------------------" << endl;
    cout << " 1) Yes" << endl;
    cout << " 2) No " << endl;

    //Get User Input
    int makeDecision;
    cout << "Choose Option: ";
    cin >> makeDecision;
    cout << endl;

    //Throw Error if Input is invalid
    if (makeDecision < 1) {
        displayError();
    } else {
    if (makeDecision == 1) {

        //Clear screen
        system("CLS");

        //Restart The Game
        main();
    } else {
        //Say bye
        cout << "OK! Thanks for Playing! Have a nice day!" << endl;
    }
    }
}
