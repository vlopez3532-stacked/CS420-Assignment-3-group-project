// Blackjack project: Player class declaration.
// Player publicly inherits the common hand and participant behavior.

#pragma once

#include "GenericPlayer.h"

using namespace std;

class Player : public GenericPlayer
{
public:
    // Initializes the base participant and assigns the requested player name.
    Player(const string& name = " ");
    // Virtual destructor for polymorphic use.
    virtual ~Player();
    // Prompts the player to hit or stand.
    virtual bool isHitting() const;
    // Announces a player win.
    bool win() const;
    // Announces a player loss.
    bool lose() const;
    // Announces a push.
    bool push() const;
};
