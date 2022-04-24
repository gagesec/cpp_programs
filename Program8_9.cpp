/*

Driver's License Exam

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 4/5/2022

User enters answers given by student and the program collects the the answers and outputs
the results and displays which answers were incorrect.

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Use standard namespace
using namespace std;

//Config - Set Array Size
const int SIZE = 20;

//Global Variables
int correct;
int incorrect;
int showIncorrect[SIZE];

//Declare Functions and Modules
void testResults(string testAnswers[], string inputAnswers[]);

//Main function entry point
int main() {

    //Display Header
    cout << "          Driver's License Exam          " << endl;
    cout << "-----------------------------------------" << endl;
    cout << endl;

    //Declare Arrays
    string testAnswers[SIZE] = {"B", "D", "A", "A", "C", "A", "B", "A", "C", "D", "B", "C", "D", "A", "D", "C", "C", "B", "D", "A"};
    string inputAnswers[SIZE];

    //Begin User Input Loop
    for(int i = 0; i < SIZE; i++)
    {
        //User Input
        cout << "Enter Answer " << i + 1 << ": ";
        cin >> inputAnswers[i];
        cout << endl;
    }

    //Formatting
    cout << "-----------------------------------------" << endl;

    //Call testResults Module
    testResults(testAnswers, inputAnswers);

    //Output Whether Student Passed or Fail the Exam
    if (correct >= 15)
    {
        //If more than 15 questions answered correctly
        cout << "          Exam Status: PASS" << endl;
    }
    else
    {
        //If less than 15 questions answered correctly
        cout << "          Exam Status: FAIL" << endl;
    }

    //Output Overall Results
    cout << "-----------------------------------------" << endl;
    cout << "              Correct: " << correct << endl;
    cout << "            Incorrect: " << incorrect << endl;
    cout << "  Questions Incorrect: ";

    //Output Questions Numbers answered Incorrectly
    for(int i = 0; i < SIZE; i++)
    {
        //If question is answered incorrectly
        if(showIncorrect[i] == 1)
        {
            //Output incorrect question number
            cout << "[" << i + 1 << "]";
        }

        //If all questions were answered correctly
        else if(incorrect == 0)
        {
            //Output NONE and break the loop
            cout << "NONE" << endl;
            break;
        }
    }

    //Formatting
    cout << endl;

    return 0;
}

//Begin testResults Module
void testResults(string testAnswers[], string inputAnswers[])
{
    //Begin Answer Check Loop
    for(int i= 0; i < SIZE; i++)
    {
        //If answers are correct
        if(testAnswers[i] == inputAnswers[i])
        {
            //Increment correct value and set showIncorrect to false
            correct++;
            showIncorrect[i] = 0;
        }

        //If answers are incorrect
        else
        {
            //Increment incorrect value and and set showIncorrect to true
            incorrect++;
            showIncorrect[i] = 1;
        }
    }
}


