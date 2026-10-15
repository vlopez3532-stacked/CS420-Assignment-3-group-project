// Simple checks for the completed card, hand, and player foundation.

#include <cassert>
#include <iostream>
#include "Card.h"
#include "Hand.h"
#include "Player.h"

using namespace std;

int main()
{
    Card ace(Card::ACE, Card::SPADES);
    Card king(Card::KING, Card::HEARTS);
    Card hidden(Card::FIVE, Card::CLUBS, false);

    assert(ace.getValue() == 1);
    assert(king.getValue() == 10);
    assert(hidden.getValue() == 0);

    cout << "Card display check: " << ace << " " << king << " " << hidden << endl;

    hidden.flip();
    assert(hidden.getValue() == 5);
    cout << "After flipping hidden card: " << hidden << endl;

    Hand hand;
    hand.add(new Card(Card::ACE, Card::DIAMONDS));
    hand.add(new Card(Card::NINE, Card::CLUBS));
    cout << "Ace hand total (should be 20): " << hand.getTotal() << endl;
    assert(hand.getTotal() == 20);

    Player player("Test Player");
    player.add(new Card(Card::TEN, Card::SPADES));
    player.add(new Card(Card::QUEEN, Card::HEARTS));
    cout << player << endl;
    assert(player.getTotal() == 20);
    assert(!player.isBusted());

    cout << "All foundation checks passed." << endl;
    return 0;
}
