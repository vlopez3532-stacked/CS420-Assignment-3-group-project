// Blackjack project: GenericPlayer implementation.
// Add shared behavior for the human player and dealer in this file.

#include "GenericPlayer.h"

using namespace std;

// Initializes the shared participant name through a member initializer list.
GenericPlayer::GenericPlayer()
    : name(" ")
{
    /* Constructor
           Initialize the member variables using the member initializer in the constructor.
           The body of the constructor remains empty.
       END FUNCTION
    */
}

// Virtual destructor for polymorphic cleanup.
GenericPlayer::~GenericPlayer()
{
    // Hand's destructor will release owned cards.
}

// Reports whether this participant's hand exceeds 21.
bool GenericPlayer::isBusted() const
{
    /* Function isBusted
           Indicates whether the generic player is busted.

           IF getTotal() IS GREATER THAN 21 THEN
               Return appropriate value
           ELSE
               Return appropriate value
           END IF
       END FUNCTION
    */
    return false; // TODO: implement the bust check.
}

// Prints a bust message for this participant.
bool GenericPlayer::bust() const
{
    /* Function bust()
            Print the name and display that the player has busted
       END FUNCTION
    */
    // TODO: print the bust message.
    return false; // TODO: follow the required return convention after printing.
}

// Returns this participant's name.
string GenericPlayer::getName() const
{
    /* NOTE: WRITE APPROPRIATE CODE FOR SETTER AND GETTER FUNCTIONS FOR THIS CLASS */
    return string(); // TODO: return the stored name.
}

// Updates this participant's name.
void GenericPlayer::setName(string newName)
{
    /* NOTE: WRITE APPROPRIATE CODE FOR SETTER AND GETTER FUNCTIONS FOR THIS CLASS */
    (void)newName;
    // TODO: store the new participant name.
}

// Displays the participant's name, cards, and total when available.
ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer)
{
    /* Overloaded << operator for GenericPlayer Class
       Store the name followed by a tab space in the output object.

       Create a vector iterator of type Card*

       IF the cardVector for the generic player object is not empty THEN
           LOOP through all cards for that player
               store the value of the card followed by the tab space [ use *(*iterator_name)]
           END LOOP

           IF the total score for the player is NOT EQUAL TO 0 THEN
               append the total to the output object
           END IF
       ELSE
           append "<empty>"
       END IF

       Return output object

       Example output: Say the name of the player is Player1 and the player has 5 spades and a jack of
       hearts and the dealer's first card is still facing down then this function should print an
       output as follows:

       Player       5s      JH      (15)
       House        XX      9C

       END FUNCTION
    */
    (void)aGenericPlayer;
    // TODO: implement participant formatting.
    return os;
}
