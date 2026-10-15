// Blackjack project: Game class declaration.
// Game composes one Deck, House, and Player and coordinates complete rounds.

#pragma once

#include "Deck.h"
#include "House.h"
#include "Player.h"

using namespace std;

class Game
{
private:
    Deck deck;
    House house;
    Player player;

public:
    // Constructs the composed game objects and initializes the player.
    Game(const string& name);
    // Releases the composed objects through their own destructors.
    ~Game();
    // Plays one complete Blackjack round.
    void play();
};
