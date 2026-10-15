// Blackjack project: House class declaration.
// House publicly inherits the common hand and participant behavior.

#pragma once

#include "GenericPlayer.h"

using namespace std;

class House : public GenericPlayer
{
public:
    // Calls the base constructor and assigns the dealer name.
    House(const string& name = "Dealer");
    // Virtual destructor for polymorphic use.
    virtual ~House();
    // Returns true while dealer total is 16 or less.
    virtual bool isHitting() const;
    // Reveals the first card, or reports an empty hand.
    void flipFirstCard() const;
};
