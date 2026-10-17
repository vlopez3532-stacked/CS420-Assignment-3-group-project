// Blackjack project: program entry point.
// Add the welcome message, player prompt, and replay loop here.

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Game.h"

using namespace std;

// Starts the Blackjack program.
int main()
{
    /* Main
       Print appropriate welcome message to begin the game
       NOTE: My personal reccomendation is also printing/defining the card symbol meanings
        - could score for the rubric for UI. (barely learned black jack like a year ago)

       Create a character variable called again and initialize it to 'y'

       Prompt for the player name and store it in variable called name.

       Create a game object and pass the name to it

       Call the function play() using the game object. [Use a sentinel controlled loop around this to prompt
       the player and check if he wants to play again to stay in the game. You exit the game when the user
       chooses 'no']

       END FUNCTION
    */

    cout << "Hello and welcome to BlackJack!" << endl;
    cout << "Goal: get closer to 21 than the dealer without going over." << endl;
    cout << "Card key: A = Ace (1 or 11), 2-10 = face value, J/Q/K = 10" << endl;
    cout << "Suits: C = Clubs, D = Diamonds, H = Hearts, S = Spades" << endl;
    cout << "XX = a face-down card. The number in () is the hand total.\n" << endl;


    srand(static_cast<unsigned int>(time(0))); // this hopefully should randomize the deck each time the script is ran.

    char again = 'y';
    string name;

    cout << "Please enter your name: " << endl;
    getline(cin, name);

    while (again == 'y' || again == 'Y')
    {
        Game aGame(name);
        cout << endl;
        aGame.play();

        cout << "\nDo you want to play again? (y/n): " << endl;
        cin >> again;
    }

    cout << "Thanks for playing, " << name << "!" << endl;
    return 0;
}
