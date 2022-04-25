/*

Weight Loss

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 2/17/2022

Weight Loss Calculator

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - Adds time library
#include <ctime>

//Include Directive - IO Manipulators
#include <iomanip>

//Use standard namespace
using namespace std;

//Main function entry point
int main() {

    //Declare variable for input
    int currentMonth, currentWeight, lbsPerMonth;

    //Creates string index for names of months
    string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

    //Declare time variable
    time_t t = time(NULL);

    //Convert time to localtime
    tm* timePtr = localtime(&t);

    //Get value for current month
    currentMonth = timePtr->tm_mon;

    //Sets lbs per month
    lbsPerMonth = 4;

    //Get User Input
    cout << "     WEIGHT LOSS CALCULATOR!" << '\n';
    cout << "     IF YOU CUT 500 CALORIES" << '\n';
    cout << "     PER DAY, YOU WILL LOSE " << '\n';
    cout << "        4 LBS PER MONTH!" << '\n';
    cout << "_________________________________" << '\n';
    cout << "Enter Current Weight: ";
    cin >> currentWeight;
    cout << "_________________________________" << '\n' << '\n';
    cout << " IF YOU STICK TO YOUR DIET PLAN," << '\n';
    cout << " YOUR TARGET WEIGHT FOR THE NEXT" << '\n';
    cout << "          6 MONTHS IS:" << '\n' << '\n';
    cout << "_________________________________" << '\n';

    //Get current month variable and apply to i, then increment i(month) for the 6 months
    for(int i = 0; i < 7; i++) {

        // If month goes past december, return increments to start at (0)January
        if (currentMonth + i > 11) {
            currentMonth -= 12;
        }
        // Adds lbs after weight
        string unit = "lbs";

        //Displays in output to signify current month
        if (i == 0) unit += " (Current Month)";

        //Calculate and display current month and display weight loss for for the next 6 month
        cout << setw(10) << months[currentMonth + i] << ": " << currentWeight - (lbsPerMonth * i) << unit << endl;
    }

    cout << "_________________________________" << '\n';

    return 0;
}
