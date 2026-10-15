// Blackjack project: Card class implementation.
// Complete the scoring, visibility, and display logic in this file.

#include <string>
#include "Card.h"

using namespace std;

// Initializes the rank, suit, and face-up state through a member initializer list.
Card::Card(RANK rank, SUIT suit, bool isUp)
    : rank(rank), suit(suit), isFaceUp(isUp)
{
    /* Constructor
       Initialize the member variables using the member initializer list in the constructor. The body
       of the constructor remains empty.
       END FUNCTION
    */
}

// Returns this card's Blackjack value, or zero when it is face down.
int Card::getValue() const
{
    /* Function getValue
       Return the value of the card if the card is facing up. Otherwise return 0.
       NOTE: The king, queen, jack should also return a value 10
       END FUNCTION
    */
    return 0; // TODO: replace with the scoring logic above.
}

// Changes the card from face up to face down, or vice versa.
void Card::flip()
{
    /* Function flip()
       Flips a card. Face up becomes face down, and face down becomes face up
       END FUNCTION
    */
    // TODO: implement the visibility toggle.
}

// Writes a card code such as JH, or XX when the card is face down.
ostream& operator<<(ostream& os, const Card& aCard)
{
    /* Overloaded << operator for Card Class
       Create 2 constant string arrays named RANKS and SUITS (RANKS will contain elements like “0”, “A”
       etc and SUITS will contain “S”, “C” etc) and use these string arrays to print appropriate rank
       and suit when displaying the card. The enumerators created in the card class will work like the
       index for the above arrays.

       IF the card is facing up THEN
           store the rank and suit in the output object.
       ELSE
           store "XX"
       END IF

        HINT: This function should print JH for jack of hearts or 5S for 5 spades etc for each card.

       Return output object [See overloaded << class example]
       END FUNCTION
    */
    (void)aCard;
    // TODO: implement card formatting.
    return os;
}
