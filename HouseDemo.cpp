// Simple checks for the House player.

#include <cassert>
#include <iostream>

#include "Card.h"
#include "House.h"

using namespace std;

int main()
{
    cout << "Create House named Dealer" << endl;

    House house("Dealer");

    assert(house.getName() == "Dealer");
    cout << "House name: " << house.getName() << endl;

    cout << "Testing House with a total of 16" << endl;

    house.add(new Card(Card::TEN, Card::SPADES));
    house.add(new Card(Card::SIX, Card::HEARTS));

    assert(house.getTotal() == 16);
    assert(house.isHitting());

    cout << "House total: " << house.getTotal() << endl;
    cout << "House is hitting: " << house.isHitting() << endl;
    house.clearHand();

    cout << "Testing House with a total of 17" << endl;

    house.add(new Card(Card::TEN, Card::SPADES));
    house.add(new Card(Card::SEVEN, Card::HEARTS));

    assert(house.getTotal() == 17);
    assert(!house.isHitting());

    cout << "House total: " << house.getTotal() << endl;
    cout << "House is hitting: " << house.isHitting() << endl;
    cout << "House tests passed." << endl;

    return 0;
}