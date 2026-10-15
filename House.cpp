// Blackjack project: House implementation.
// Add dealer hit policy and hidden-card handling in this file.

#include <iostream>
#include "House.h"

using namespace std;

// Calls the base constructor and stores the dealer's name.
House::House(const string& name)
    : GenericPlayer()
{
    /* Constructor
       Call the base class constructor to initialize the member variable.
       END FUNCTION
    */
    (void)name;
    // TODO: assign the dealer name.
}

// Virtual destructor for House.
House::~House()
{
}

// Determines whether the dealer should hit.
bool House::isHitting() const
{
    /* Function isHitting
       Concrete function. Indicates whether the dealer wants to hit

       IF the value returned by getTotal() IS LESS THAN EQUAL TO 16 THEN
           The House hits (return appropriate values, use if..else, if needed)
       ENDIF
       END FUNCTION
    */
    return false; // TODO: implement the dealer hit rule.
}

// Flips the dealer's first card when one is available.
void House::flipFirstCard() const
{
    /* Function flipFirstCard
       Flips over the first card.
       IF cardVector is not empty THEN
           call the flip function on the first element of the vector.
       ELSE
           Display an appropriate message indicating that there are no cards to flip
       END IF
       END FUNCTION
    */
    // TODO: implement first-card handling.
}
