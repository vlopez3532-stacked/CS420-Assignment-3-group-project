// Blackjack project: GenericPlayer class declaration.
// GenericPlayer publicly inherits Hand and provides shared player/dealer behavior.

#pragma once

#include <string>
#include <iostream>
#include "Hand.h"

using namespace std;

class GenericPlayer : public Hand
{
private:
    string name;

public:
    // Initializes the shared player name with a member initializer list.
    GenericPlayer();
    // Enables safe destruction through a GenericPlayer pointer.
    virtual ~GenericPlayer();
    // Returns whether this participant wants another card.
    virtual bool isHitting() const = 0;
    // Reports whether the hand total exceeds 21.
    bool isBusted() const;
    // Displays the participant's bust message.
    bool bust() const;
    // Returns the participant name.
    string getName() const;
    // Replaces the participant name.
    void setName(string name);
    // Displays participant name, cards, and a nonzero total.
    friend ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer);
};
