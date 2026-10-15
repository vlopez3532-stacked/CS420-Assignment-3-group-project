// Blackjack project: Deck class declaration.
// Deck publicly inherits Hand and owns the undealt card objects.

#pragma once

#include "Hand.h"
#include "GenericPlayer.h"

using namespace std;

class Deck : public Hand
{
public:
    // Constructs and populates a standard 52-card deck.
    Deck();
    // Virtual destructor for the derived deck type.
    virtual ~Deck();
    // Recreates all 52 cards.
    void populate();
    // Randomizes card order.
    void shuffle();
    // Transfers the last card to another hand.
    void deal(Hand& aHand);
    // Deals until the participant stands or busts.
    void additionalCards(GenericPlayer& aGenericPlayer);
};
