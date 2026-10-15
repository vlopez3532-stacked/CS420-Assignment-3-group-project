// Blackjack project: Hand class declaration.
// Hand owns a collection of dynamically allocated cards; Deck and GenericPlayer inherit publicly.

#pragma once

#include <vector>
#include "Card.h"

using namespace std;

class Hand
{
protected:
    vector<Card*> cardVector;

public:
    // Creates a hand and reserves its expected capacity.
    Hand();
    // Releases every card owned by this hand.
    virtual ~Hand();
    // Takes ownership of a card pointer and appends it to the hand.
    void add(Card* cardPtr);
    // Deletes and removes every card in the hand.
    void clearHand();
    // Calculates the best Blackjack total, treating an Ace as 11 when valid.
    int getTotal() const;
};
