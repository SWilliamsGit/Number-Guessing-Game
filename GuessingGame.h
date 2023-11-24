#ifndef GUESSINGGAME_H
#define GUESSINGGAME_H
#include <string>
using namespace std;

class GuessingGame {
    public:
        // Pre: user has selected 1 on the menu
        // Post: a difficulty is selected and the correct game is played
        void gameTime();

        // Pre: user has selected 2 on the menu
        // Post: updated scoreboard is displayed
        void scoreboard();

    private:
        int secretNum;          // variable for randomized number
        int guessesLeft;        // variable for # of CPU guesses
        int playerGuess;        // variable for user's guess
        int compGuess = 0;      // variable for CPU's guess
        int playerPoint = 0;    // variable for user's points
        int compPoint = 0;      // variable for CPU's points
        int playerScore;        // variable for user scoreboard score
        int compScore;          // variable for CPU scoreboard score
};

#endif // GUESSINGGAME_H
