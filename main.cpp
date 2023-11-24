/******************************************************************************
Skyler Williams CSC210
9/25/22
Number Guessing Game!
This program allows the user to compete against the CPU in a randomized number
guessing game. A certain number of points is awarded to either the CPU or user,
depending on who correctly guesses the number first and also the difficulty
selected by the user. The points may be viewed on the scoreboard.
*******************************************************************************/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "GuessingGame.h"

using namespace std;

int main() {

    // constructor
    GuessingGame game;

    int option;                                 // variable for menu options
    bool menu = true;                           // set menu to true

    // loop while true
    while (menu) {
        cout << endl << "Menu: " << endl;
        cout << "1. Guessing Game\n";           // enter 1 for game to begin
        cout << "2. Scoreboard\n";              // enter 2 to view scoreboard
        cout << "3. Exit\n";                    // enter 3 to exit
        cin >> option;
        switch(option) {
            case 1: game.gameTime(); break;     // calls gameTime function
            case 2: game.scoreboard(); break;   // calls scoreboard function
            case 3: menu = false;               // set menu to false
            default: cout << endl << "Exiting Game...May the Force be with you." << endl;
        }
    }
    return 0;
}
