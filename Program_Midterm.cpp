/*

Mid Term - Average Grade

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 3/23/2022

This programs accepts 5 test scores, averages them, then gives the
user a Letter Grade based on the average

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Use standard namespace
using namespace std;

//Configuration - Set amount of inputs for test scores
int testScores = 5;

//Declare Modules & Functions
string determineGrade(double numCheck);
double calcAverage(double num[]);

//Begin Main Module
int main()
{
    //Display Header
    cout << "      Get Average & Letter Grade      " << endl;
    cout << endl;
    cout << "            90 - 100 = A              " << endl;
    cout << "            80 - 89  = B              " << endl;
    cout << "            70 - 79  = C              " << endl;
    cout << "            60 - 69  = D              " << endl;
    cout << "               < 60  = F              " << endl;
    cout << "--------------------------------------" << endl;
    cout << endl;

    //Declare Variables
    int i;
    double num[testScores];
    double numCheck;
    string score[testScores];

    //Get User Input Loop bases on testScores set in Configuration
    for(i=0;i < testScores; i++)
    {

        //Get User Input
        cout << setw(24) << "Enter Test Score " << i + 1 << ": ";
        cin >> num[i];
        cout << endl;

        //If number is invalid, throw error and make user re-enter number
        if(num[i] < 0 || num[i] > 100)
        {
            //Error Message
            cout << "Error! Number Cannot Be less than 0 or greater than 100!" << endl;

            //Makes user re enter previous number
            i--;
        }

        //If all inputs are valid, call determineGrade function to get letter grades
        else
        {
            //Calls determineGrade function to get letter grade for num[i]
            numCheck = num[i];
            score[i] = determineGrade(numCheck);
        }
    }

    cout << "--------------------------------------" << endl;

    //Display Test Scores Loop
    for (i=0;i < testScores; i++)
    {
        //Formatted output for test scores
        cout << "Test Score " << i + 1 << ": " << score[i] << " | "  << num[i] << "%" << endl;
    }

    //Call calcAverage Function to get average of all test scores
    double average = calcAverage(num);

    //Changes numCheck value to get letter grade for average
    numCheck = average;
    string overallGrade = determineGrade(numCheck);
    cout << "--------------------------------------" << endl;

    //Formatted output to average score
    cout << setw(14) << "Average: " << overallGrade << " | " << average << "%" << endl;

    return 0;
}

//Begin determineGrade Function
string determineGrade(double numCheck)
{
    //If numCheck is between 90 and 100
    if(numCheck >= 90 && numCheck <= 100)
    {
        return "A";
    }
    //If numCheck is between 80 and 89
    else if(numCheck >= 80 && numCheck < 90)
    {
        return "B";
    }
    //If numCheck is between 70 and 79
    else if(numCheck >= 70 && numCheck < 80)
    {
        return "C";
    }
    //If numCheck is between 60 and 69
    else if(numCheck >= 60 && numCheck < 70)
    {
        return "D";
    }
    //If numCheck is less than 60
    return "F";
}

//Begin calcAverage Function
double calcAverage(double num[])
{
    //Declare Variables
    double avg, result;

    //Begin Average Loop
    for (int i = 0; i < testScores ; i++)
    {
        //Incrementally adds all scores in num array
        avg += num[i];
    }

    //Divides the sum of all scores by testScores
    result = avg / testScores;

    //Returns average score back to main
    return result;
}

