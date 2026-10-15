// Blackjack project: Deck implementation.
// Add deck population, shuffling, and dealing in this file.

#include <algorithm>
#include <iostream>
#include "Deck.h"

using namespace std;

// Reserves space for 52 cards and prepares a new deck.
Deck::Deck()
{
    /* Constructor
       Call the function cardVector.reserve(52)
       Call function populate()
       END FUNCTION
    */
    // TODO: reserve and populate the deck.
}

// Virtual destructor for Deck; Hand owns and releases the remaining cards.
Deck::~Deck()
{
}

// Recreates all rank and suit combinations.
void Deck::populate()
{
    /* Function populate
       Creates a standard deck of 52 cards.
       Call function clearHand()
       To create standard deck iterate through all ranks and suits [use nested loop on each enumerator]
       call function add(new Card(static_cast<Card::RANK>(r), static_cast<Card::SUIT>(s)))
       END FUNCTION
    */
    // TODO: create all 52 cards.
}

// Randomizes the order of cards in the deck.
void Deck::shuffle()
{
    /* Function shuffle
       Shuffles cards.
       Call function random_shuffle(cardVector.begin(), cardVector.end())
       [You will need to include the standard library named algorithms for this to work]
       END FUNCTION
    */
    // TODO: shuffle the cards.
}

// Transfers the last card in the deck to another hand.
void Deck::deal(Hand& aHand)
{
    /* Function deal
       Deals one card to a hand. A hand is any player.
       IF cardVector is not empty [use empty() in vector library] THEN
           call aHand.add(cardVector.back())
           call cardVector.pop_back()
       ELSE
           display an appropriate message indicating that you are out of cards and are unable to
           deal.
       END IF
       END FUNCTION
    */
    (void)aHand;
    // TODO: implement dealing.
}

// Deals additional cards while a participant wants to hit and is not busted.
void Deck::additionalCards(GenericPlayer& aGenericPlayer)
{
    /* Function additionalCards
       Gives additional cards to any player for as long as, that player can and wants to hit.

       WHILE generic player object is not busted and keeps hitting
           call the function deal and pass the generic player object to it.
           Display generic player object using cout [this will invoke the overloaded insertion
           operator]

           IF generic player object is busted THEN
               call the function bust() using the generic player object
           END IF
       END WHILE
       END FUNCTION
    */
    (void)aGenericPlayer;
    // TODO: implement the hit loop.
}
