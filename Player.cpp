#include "Player.h"

bool Player::assertHeroPower() {
    return usedHeroPower;
}

void Player::changeHeroPowerBool() {
    usedHeroPower = !usedHeroPower;
}

int Player::getRace() {
    return race;
}

void Player::addMinionsToDeck() {
    deck = new vector<Minion>[30];

}

void Player::addCardToHand() {
    hand.push_back(deck.pop_back());
}

void Player::addCardToBoard(Minion newMinion) {
    
}