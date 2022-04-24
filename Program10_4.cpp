/*

Average of Numbers

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 4/18/2022

Program reads a .txt file and calculates the average of integers in the file.

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Include Directive - Open/Write Files
#include <fstream>

//Include Directive - needed to convert string to int
#include <string>

//Use standard namespace
using namespace std;

//Declare Functions and Modules
int processArraySize();
void processArrayNumbers(int numbers[], int SIZE);

//Main function entry point
int main()
{

    //Display Header
    cout << "            Average Of Numbers           " << endl;
    cout << "-----------------------------------------" << endl;
    cout << endl;

    //Declare Variables
    const int SIZE = processArraySize();
    int numbers[SIZE];
    int total;

    //Inputs each line from txt file into the array
    processArrayNumbers(numbers, SIZE);

    //Loop that adds the sum of all numbers in array
    for(int i = 0; i < SIZE; i++)
    {
        //Adds all numbers in array
        total += numbers[i];
        cout << setw(23) << right << numbers[i] << endl;
    }

    //Displays the average
    cout << "-----------------------------------------" << endl;
    cout << setw(21) << right << "Average Of Numbers: " << total / SIZE << endl;

    return 0;
}

//Gets the number of lines in file and returns value to set array size
int processArraySize()
{
    //used to open txt file
    ifstream numbersFile;

    //used to get line from txt file
    string line;

    //declare variable
    int count = 0;

    //opens txt file
    numbersFile.open("numbers.txt");

    //Outputs error if file fails to open
    if(numbersFile.fail())
    {
        cout << "Error! Failed to open file!" << endl;
        exit(1);
    }

    //loops while not at end of document
    while(!numbersFile.eof())
    {
        //gets line from txt file
        getline(numbersFile, line);

        //increments per line
        count++;
    }
    //Close the File
    numbersFile.close();

    //returns last line number of document
    return count;
}

//Adds lines in txt file into array
void processArrayNumbers(int numbers[], int SIZE)
{
    //used to open txt file
    ifstream numbersFile;

    //get line from txt file
    string line;

    //declare variable
    int count = 0;

    //opens txt file
    numbersFile.open("numbers.txt");

    //Outputs error if file fails to open
    if(numbersFile.fail())
    {
        cout << "Error! Failed to open file!" << endl;
        exit(1);
    }

    //loop that get each line and inserts into array
    for(int i = 0; i < SIZE; i++)
    {
        //gets line from txt file
        getline(numbersFile, line);

        //inserts each line into array
        numbers[i] = stoi(line);

        //increments line count
        count++;
    }
    //Close the File
    numbersFile.close();
}
