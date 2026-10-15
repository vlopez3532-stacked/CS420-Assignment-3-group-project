// Blackjack project: Card class declaration.
// Card stores a rank, suit, and visibility state for one playing card.

#pragma once

#include <iostream>

using namespace std;

class Card
{
public:
    enum RANK { ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING };
    enum SUIT { CLUBS, DIAMONDS, HEARTS, SPADES };

protected:
    RANK rank;
    SUIT suit;

private:
    bool isFaceUp;

public:
    // Initializes rank, suit, and visibility through a member initializer list.
    Card(RANK rank = ACE, SUIT suit = SPADES, bool isUp = true);
    // Returns the card's Blackjack value, or zero while face down.
    int getValue() const;
    // Toggles the card between face-up and face-down states.
    void flip();
    // Writes the visible card notation, or XX for a hidden card.
    friend ostream& operator<<(ostream& os, const Card& aCard);
};
