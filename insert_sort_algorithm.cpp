/*

Number Sorter

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 4/11/2022

Gets 10 numbers from user, then sorts the numbers in ascending order using Insertion Sort Algorithm

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Include Directive - Standard Input Output
#include <stdio.h>

//Use standard namespace
using namespace std;

//Declare Functions and Modules
void sortNumbers(int num[], int SIZE);

//Main function entry point
int main() {

    //Display Header
    cout << "              Number Sorter              " << endl;
    cout << "-----------------------------------------" << endl;
    cout << endl;

    //Declare Variables and Arrays
    const int SIZE = 10;
    int num[SIZE];

    //Start User Input Loop
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Enter Number " << i + 1 << ": ";
        cin >> num[i];
        cout << endl;

        //Number Validation
        if (num[i] < 0 || cin.fail())
        {
            //Output Error Message
            cout << "ERROR! Input is invalid!" << endl;
            cout << endl;

            //Clear and discard invalid input, return user to reenter number
            cin.clear();
            cin.ignore();
            i--;
        }
    }

    //Call sortNumbers Function to reorder numbers in num array in ascending order
    sortNumbers(num, SIZE);

    //Formatting
    cout << "-----------------------------------------" << endl;
    cout << endl;

    //Display all numbers in num array
    for(int i = 0; i < SIZE; i++)
    {
        cout << setw(5) << right << num[i] << endl;
    }

    return 0;
}

//Start sortNumbers Function
void sortNumbers(int num[], int SIZE)
{
    //Declare Variables
    int unsortedValue;
    int scanner;

    //Start Search and Sort Loop
    for(int i = 0; i < SIZE; i++)
    {
        //Pull number from array to sort
        unsortedValue = num[i];
        scanner = i;

        //while number in num array in current position is greater than the unsortedValue
        while(num[scanner - 1] > unsortedValue)
        {
            //replace number in that array position with the greater number
            num[scanner] = num[scanner - 1];
            scanner--;
        }
        //Replaces numbers in num array throughout the loop to sort in ascending order
        num[scanner] = unsortedValue;
    }
}
