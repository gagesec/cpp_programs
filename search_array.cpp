/*

Name Finder

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 4/13/2022

Program allows users to enter X amount of names then search the name array.

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Use standard namespace
using namespace std;

//Declare Functions and Modules
int binarySearch(string name[], int SIZE, string searchWord);
void sortArray(string name[], int SIZE);

//Main function entry point
int main() {

    //Display Header
    cout << "               Name System               " << endl;
    cout << "-----------------------------------------" << endl;
    cout << endl;

    //Declare Variables
    int X;

    //Get User Input
    cout << "Enter amount of names to enter: ";
    cin >> X;

    //Input validation loop
    while(X < 1 || X > 100 || cin.fail())
    {
        cout << "Amount cannot be less than 1 or more than 100." << endl;
        cout << endl;
        cout << "Enter amount of names to enter: ";
        cin.clear();
        cin.ignore();
        cin >> X;
    }

    //Declare constant variable for array
    const int SIZE = X;

    //Formatting
    cout << endl;
    cout << "-----------------------------------------" << endl;

    //Declare Array
    string name[SIZE];

    //Start user input loop
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Enter Name " << i + 1 <<": ";
        cin >> name[i];
        cout << endl;
    }

    //Sort Array
    sortArray(name, SIZE);

    //Get User Input
    string searchWord;
    cout << "Search: ";
    cin >> searchWord;

    //Formatting
    cout << endl;
    cout << "-----------------------------------------" << endl;

    //Call binary search function to see if searchWord matches any elements in array.
    int result = binarySearch(name, SIZE, searchWord);

    //If binarySearch Does not find a match in the array elements
    if(result == -1)
    {
        cout << searchWord << " not found in system!" << endl;
    }
    //If binarySearch does find a match in the array elements
    else
    {
        cout << name[result] << " is in the system!" << endl;
    }


    return 0;
}

//Begin binarySearch Function
int binarySearch(string name[], int SIZE, string searchWord)
{
    //Declare Variables
    int position = -1;
    int lower = 0,
        upper = SIZE,
        mid;
    bool found = false;

    //while found equals false and lower is less than or equal to upper
    while(!found && lower <= upper)
    {
        //define mid as being the middle element of the array
         mid = (lower + upper)/2;

        //if middle element equals searchWord
        if(name[mid] == searchWord)
        {
            // set found to true and define position variable as mid
            found = true;
            position = mid;
        }

        //If middle element is smaller than searchWord, increase lower variable
        else if (name[mid] > searchWord)
        {
            upper = mid - 1;
        }

        //If middle element is greater than searchWord, decrease the upper variable
        else
        {
            lower = mid + 1;
        }
    }

    //Returns position, If function does not find a match, the return value is -1
    return position;
}

//Start sort array function using bubblesort
void sortArray(string name[], int SIZE)
{
    //Declare Variables
    int maxElement;
    int i;
    string temp;
    int counter;

    //Start bubblesort loop
    for (maxElement = SIZE - 1; maxElement >= 0; maxElement--)
    {
        //Steps through elements in array and swaps elements that are not in order
        for (counter = 0; counter <= SIZE - 1; counter++)
        {
            //loop that performs the swaps
            for(i = 0; i <= maxElement - 1; i++)
            {
                //If name[i] is greater than the next element in name array
                if(name[i] > name[i + 1])
                {
                    //Swaps the elements
                    temp = name[i];
                    name[i] = name[i + 1];
                    name[i + 1] = temp;
                }
            }
        }
    }
}
