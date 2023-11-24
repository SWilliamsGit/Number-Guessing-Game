#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "GuessingGame.h"
using namespace std;

// Pre: user has selected 1 on the menu
// Post: a difficulty is selected and the correct game is played
void GuessingGame::gameTime() {

    int difficulty;     // variable for user difficulty option

    cout << "Choose Your Difficulty:\n";
    cout << "1. Padawan - 5 Computer Guesses\n";
    cout << "2. Knight - 10 Computer Guesses\n";
    cout << "3. Master - 20 Computer Guesses\n";
    cin >> difficulty;

    // array to store each unique guess
    bool array[100];
    int i = 0;
    while (i < 100) {
        // set array to 0
        array[i] = 0;
        // increment
        i++;
    }

    srand(time(0));
    // set secretNum to randomized integer 0-100
    secretNum = (rand()%100);

    // loop until secret number is found
    while (playerGuess != secretNum && compGuess != secretNum) {

/************************************************************************************/
    // Easy Difficulty - 1 point awarded to winner
    if (difficulty == 1) {
        // prompt user for guess
        cout << endl << "Enter your guess: ";
        cin >> playerGuess;

        // if player guess is correct
        if (playerGuess == secretNum) {
            cout << "Great, kid. Don't get cocky. You win." << endl;
            // player gains one point
            playerPoint = playerPoint + 1;
        }

        // if guess is less than secret number
        else if (playerGuess < secretNum) {
            guessesLeft = 0;    // resets guesses
            cout << "Nope! Guess too low. Computer's turn." << endl;

            // loop until computer is out of guesses
            while(guessesLeft < 5) {
                // set computer guess to random integer 0-100
                compGuess = (rand()%100);
                if(array[compGuess] == 1) {
                    // loop again to generate different number
                }
                else {
                    // mark off number so it cannot be used again
                    array[compGuess] = 1;

                // print computer guess
                cout << compGuess << endl;
                // increment guesses left
                guessesLeft++;

                // if computer guess is correct
                if (compGuess == secretNum) {
                    cout << "There is no mercy. Computer wins." << endl;
                    // computer gains one point
                    compPoint = compPoint + 1;
                    break;
                }

                // if computer guess is incorrect
                else if (compGuess != secretNum) {
                    cout << "Computer did not find the correct number. Your turn again." << endl;
                }
                }
            }
        }

        // if guess is greater than secret number
        else if (playerGuess > secretNum) {
            guessesLeft = 0;    // resets guesses
            cout << "Nope! Guess too high. Computer's turn." << endl;

            // loop until computer is out of guesses
            while(guessesLeft < 5) {
                // set computer guess to random integer 0-100
                compGuess = (rand()%100);
                if(array[compGuess] == 1) {
                    // loop again to generate different number
                }
                else {
                    // mark off number so it cannot be used again
                    array[compGuess] = 1;

                // print computer guess
                cout << compGuess << endl;
                // increment guesses left
                guessesLeft++;

                // if computer guess is corret
                if (compGuess == secretNum) {
                    cout << "There is no mercy. Computer wins." << endl;
                    // computer gains one point
                    compPoint = compPoint + 1;
                    break;
                }

                // if computer guess is incorrect
                else if (compGuess != secretNum) {
                    cout << "Computer did not find the correct number. Your turn again." << endl;
                }
                }
            }
        }
    }
/************************************************************************************/

    // Medium Difficulty - 2 points awarded to winner
    if (difficulty == 2) {
        // Prompt user for guess
        cout << endl << "Enter your guess: ";
        cin >> playerGuess;

        // if player guess is correct
        if (playerGuess == secretNum) {
            cout << "The Force is strong with you. You win." << endl;
            // player gains two points
            playerPoint = playerPoint + 2;
        }

        // if guess is less than secret number
        else if (playerGuess < secretNum) {
            guessesLeft = 0;    // resets guesses
            cout << "Nope! Guess too low. Computer's turn." << endl;

            // loop until computer is out of guesses
            while(guessesLeft < 10) {
                // set computer guess to random integer 0-100
                compGuess = (rand()%100);
                if(array[compGuess] == 1) {
                    // loop again to generate different number
                }
                else {
                    // mark off number so it cannot be used again
                    array[compGuess] = 1;

                // print computer guess
                cout << compGuess << endl;
                // increment guesses left
                guessesLeft++;

                // if computer guess is correct
                if (compGuess == secretNum) {
                    cout << "Twice the pride, double the fall. Computer wins." << endl;
                    // computer gains two points
                    compPoint = compPoint + 2;
                    break;
                }

                // if computer guess is incorrect
                else if (compGuess != secretNum) {
                    cout << "Computer did not find the correct number. Your turn again." << endl;
                }
                }
            }
        }

        // if player guess is greater than secret number
        else if (playerGuess > secretNum) {
            guessesLeft = 0;    // resets guesses
            cout << "Nope! Guess too high. Computer's turn." << endl;

            // loop until computer is out of guesses
            while(guessesLeft < 10) {
                // set computer guess to random integer 0-100
                compGuess = (rand()%100);
                if(array[compGuess] == 1) {
                    // loop again to generate a different number
                }
                else {
                    // mark off number so it cannot be used again
                    array[compGuess] = 1;

                // print computer guess
                cout << compGuess << endl;
                // increment guesses left
                guessesLeft++;

                // if computer guess is correct
                if (compGuess == secretNum) {
                    cout << "Twice the pride, double the fall. Computer wins." << endl;
                    // computer gains two points
                    compPoint = compPoint + 2;
                    break;
                }

                // if computer guess is incorrect
                else if (compGuess != secretNum) {
                    cout << "Computer did not find the correct number. Your turn again." << endl;
                }
                }
            }
        }
    }

/************************************************************************************/
    // Hard Difficulty - 3 points awarded to winner
    if (difficulty == 3) {
        // prompt user for guess
        cout << endl << "Enter your guess: ";
        cin >> playerGuess;

        // if player guess is correct
        if (playerGuess == secretNum) {
            cout << "Never tell me the odds! You win!" << endl;
            // player gains three points
            playerPoint = playerPoint + 3;
        }

        // if player guess is less than secret number
        else if (playerGuess < secretNum) {
            guessesLeft = 0;    // resets guesses
            cout << "Nope! Guess too low. Computer's turn." << endl;

            // loop until computer is out of guesses
            while(guessesLeft < 20) {
                // set computer guess to random integer 0-100
                compGuess = (rand()%100);
                if(array[compGuess] == 1) {
                    // loop again to generate different number
                }
                else {
                    // mark off number so it cannot be used again
                    array[compGuess] = 1;

                // print computer guess
                cout << compGuess << endl;
                // increment guesses left
                guessesLeft++;

                // if computer guess is correct
                if (compGuess == secretNum) {
                    cout << "Be careful not to choke on your aspirations. Computer wins." << endl;
                    // computer gains three points
                    compPoint = compPoint + 3;
                    break;
                }

                // if computer guess is incorrect
                else if (compGuess != secretNum) {
                    cout << "Computer did not find the correct number. Your turn again." << endl;
                }
                }
            }
        }

        // if computer guess is greater than secret number
        else if (playerGuess > secretNum) {
            guessesLeft = 0;    // resets guesses
            cout << "Nope! Guess too high. Computer's turn." << endl;

            // loop until computer is out of guesses
            while(guessesLeft < 20) {
                // set computer guess to random integer 0-100
                compGuess = (rand()%100);
                if(array[compGuess] == 1) {
                    // loop again to generate different number
                }
                else {
                    // mark off number so it cannot be used again
                    array[compGuess] = 1;

                // print computer guess
                cout << compGuess << endl;
                // increment guesses left
                guessesLeft++;

                // if computer guess is correct
                if (compGuess == secretNum) {
                    cout << "Be careful not to choke on your aspirations. Computer wins." << endl;
                    // computer gains three points
                    compPoint = compPoint + 3;
                    break;
                }

                // if computer is incorrect
                else if (compGuess != secretNum) {
                    cout << "Computer did not find the correct number. Your turn again." << endl;
                }
                }
            }
        }
    }
    }
}
/************************************************************************************/

// Pre: user has selected 2 on the menu
// Post: updated scoreboard is displayed
 void GuessingGame::scoreboard() {

    int playerScore = playerPoint;  // store playerPoints into playerScore variable
    int compScore = compPoint;      // store compPoints into compScore variable

    // Print scoreboard
    cout << endl << "Scoreboard:" << endl;
    cout << "Your Score: " << playerScore << endl;
    cout << "Computer Score: " << compScore << endl;

 }
