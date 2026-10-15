// Blackjack project: Hand class implementation.
// Complete card ownership and score calculation in this file.

#include "Hand.h"

using namespace std;

// Reserves space for a typical Blackjack hand.
Hand::Hand()
{
    /* Constructor
            Call the reserve() on CardVector and pass a value of 7
       END FUNCTION
    */
}

// Releases every card owned by this hand.
Hand::~Hand()
{
    /* Destructor
            Call the function clearHand()
       END FUNCTION
    */
}

// Adds a card pointer to this hand.
void Hand::add(Card* cardPtr)
{
    /* Function add
           Adds a card to the hand.
           Call push_back() on the cardVector and pass the cardPtr as its argument
       END FUNCTION
    */
    (void)cardPtr;
    // TODO: append the card pointer.
}

// Deletes and removes every card in the hand.
void Hand::clearHand()
{
    /* Function clearHand
           Clears all cards from the hand
           Declare an iterator of the type vector<Card*>
           using the iterator delete each *iter [name of the iterator]
           Set the *iter to NULL -- Good practice
           Call function clear() on cardVector
       END FUNCTION
    */
    // TODO: implement card cleanup.
}

// Calculates the best Blackjack total for this hand.
int Hand::getTotal() const
{
    /* Function getTotal
           Returns the total value of the hand.

           IF cardVector is empty [Hint: empty is a function defined in vector class] THEN
               return 0
           ENDIF

           IF the value of the first card is 0 THEN
               return 0
               Hint: use cardVector[0]-> getValue()
           ENDIF

           To add up the card values create a const_iterator
           LOOP through the vector (using the iterator)
               calculate the total value for all the cards [Hint use (*iter)->getValue() to
               get the value of each card.]
           END LOOP

           LOOP through the hand and check if it contains an Ace
               IF the total IS LESS THAN AND EQUAL TO 11, THEN
                   add 10 to the total [since we have already set the ace to 1].
                   Return the total.
               ENDIF
           END LOOP
       END FUNCTION
    */
    return 0; // TODO: implement hand scoring.
}
