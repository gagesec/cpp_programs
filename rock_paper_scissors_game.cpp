/*

Rock, Paper, Scissors

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 3/18/2022

A good ole' fashioned game of Rock, Paper, Scissors

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Include Directive - Time
#include <ctime>


//Use standard namespace
using namespace std;

//Declare Variables
string chooseOption;
string rock = "Rock";
string paper = "Paper";
string scissors = "Scissors";



//Declare Functions and Modules
string randGen(string rock, string paper, string scissors);
string choiceNumber();
void playField();
void endGame();



//Begin Main Module
int main()
{


    //Display Header
    cout << "                 Rock, Paper, Scissors               " << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << endl;
    cout << "            Invalid Inputs returns Scissors!         " << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << endl;

    playField();

    return 0;
}

//Begin playField Module
void playField()
{
    //Declare Variables
    string playerChoice = choiceNumber();

    //If both Player and Computer get same result
    if(playerChoice == randGen(rock, paper, scissors))
    {
        cout << "You: " << playerChoice << endl;
        cout << "Computer: " << randGen(rock, paper, scissors) << endl;
        cout << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << "                  TIE! PLAY AGAIN!                   " << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << endl;

        //Send Player to make another choice
        playField();
    }

    //If computer beats Player
    else if(playerChoice == "Rock" && randGen(rock, paper, scissors) == "Paper"
    || playerChoice == "Paper" && randGen(rock, paper, scissors) == "Scissors"
    || playerChoice == "Scissors" && randGen(rock, paper, scissors) == "Rock")
    {
        cout << "     You: " << playerChoice << endl;
        cout << "Computer: " << randGen(rock, paper, scissors) << endl;
        cout << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << "                   COMPUTER WINS!                    " << endl;

        //End the game
        endGame();
    }

    //If Player beats computer
    else if(playerChoice == "Rock" && randGen(rock, paper, scissors) == "Scissors"
    || playerChoice == "Scissors" && randGen(rock, paper, scissors) == "Paper"
    || playerChoice == "Paper" && randGen(rock, paper, scissors) == "Rock")
    {
        cout << "     You: " << playerChoice << endl;
        cout << "Computer: " << randGen(rock, paper, scissors) << endl;
        cout << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << "                      YOU WIN!                       " << endl;

        //End the game
        endGame();
    }
}

//Get user input and return result back to playField
string choiceNumber()
{
    //Randomize Computer result each time this function is called
    randGen(rock, paper, scissors);

    //Get user input
    cout << "Enter 'rock', 'paper', 'scissors': ";
    cin >> chooseOption;
    cout << endl;

    //If player enter 1
    if (chooseOption == "rock")
    {
        return "Rock";
    }

    //If player enter 2
    else if (chooseOption == "paper")
    {
        return "Paper";
    }

    //If player enter 3
    else if (chooseOption == "scissors")
    {
        return "Scissors";
    }

    //call playField and return playerChoice

    return "Scissors";
}

//Computer random generator
string randGen(string rock, string paper, string scissors)
{
    //Seed Random Numbers
    srand(time(0));

    //Generate Random Number
    int numGen = 1 + rand() % 3;

    //Associate random number with 1
    if(numGen == 1)
    {
        //If random number is 1, return as rock
        return rock;
    }

    //Associate random number with 2
    else if (numGen == 2)
    {
        //If random number is 2, return as paper
        return paper;
    }

    //Associate all other values(3) as scissors
    return scissors;
}

//Begin Game Over
void endGame()
{
    cout << endl;
    cout << "                      Game Over                      " << endl;
    cout << "-----------------------------------------------------" << endl;

}
