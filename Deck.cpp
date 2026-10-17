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
    cardVector.reserve(52);
    populate();
}

// Virtual destructor for Deck; Hand owns and releases the remaining cards.
Deck::~Deck()
{
}

// Recreates all rank and suit combinations.
void Deck::populate()
{
    clearHand();
    for (int s = Card::CLUBS; s <= Card::SPADES; ++s)
    {
        for (int r = Card::ACE; r <= Card::KING; ++r)
        {
            add(new Card(static_cast<Card::RANK>(r), static_cast<Card::SUIT>(s)));
        }
    }
}

// Randomizes the order of cards in the deck.
void Deck::shuffle()
{
    random_shuffle(cardVector.begin(), cardVector.end());
}

// Transfers the last card in the deck to another hand.
void Deck::deal(Hand& aHand)
{
    if (!cardVector.empty())
    {
        // Ownership of the card moves from the deck to the receiving hand.
        aHand.add(cardVector.back());
        cardVector.pop_back();
    }
    else
    {
        cout << "There are no more cards in the deck. You can not draw. :(" << endl;
    }
}

// Deals additional cards while a participant wants to hit and is not busted.
void Deck::additionalCards(GenericPlayer& aGenericPlayer)
{
    while (!aGenericPlayer.isBusted() && aGenericPlayer.isHitting())
    {
        deal(aGenericPlayer);
        cout << aGenericPlayer << endl;

        if (aGenericPlayer.isBusted())
        {
            aGenericPlayer.bust();
        }
    }
}
