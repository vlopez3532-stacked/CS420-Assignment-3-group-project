// Blackjack project: Player implementation.
// Add human input and round result messages in this file.

#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

// Calls the base-class constructor and stores the requested player name.
Player::Player(const string& name)
    : GenericPlayer()
{
    /* Constructor
       Call the base class constructor to initialize the member variable.
       END FUNCTION
    */
    (void)name;
    // TODO: assign the requested player name.
}

// Virtual destructor for Player.
Player::~Player()
{
}

// Asks the player whether they want another card.
bool Player::isHitting() const
{
    /* Function isHitting
       Concrete function. Indicates whether the player wants to hit
       Using name of the player prompt to check if he wants to hit and return appropriate values
       END FUNCTION
    */
    return false; // TODO: implement the player prompt.
}

// Announces that the player won.
bool Player::win() const
{
    /* Function win
       Print the name and display that the player has won
       END FUNCTION
    */
    return false; // TODO: print the message and return the required value.
}

// Announces that the player lost.
bool Player::lose() const
{
    /* Function lose
       Print the name and display that the player has lost
       END FUNCTION
    */
    return false; // TODO: print the message and return the required value.
}

// Announces a push.
bool Player::push() const
{
    /* Function push
       Print the name and display that the player has pushed
       END FUNCTION
    */
    return false; // TODO: print the message and return the required value.
}
