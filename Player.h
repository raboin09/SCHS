#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
#include "Minion.h"
#include <vector>

class Player : public Character
{
public:
	Player();
	~Player();

	bool assertHeroPower();
	void setHeroPowerBool();

	int getMinerals();
	void setMinerals(int mins);

	int getRace();

	void addCardToHand();

	void setHeroPower();

	void addMinionsToDeck();

private:
	std::vector<Minion> activeMinions;
	//Array of all characters
	bool usedHeroPower;
	std::vector<Minion> deck;
	std::vector<Minion> hand;
	int minerals;
	int race;
};

Player::Player() {
	minerals = 0;
	race = 0;
	addCardToHand();
	addCardToHand();
	addCardToHand();
}

Player::Player(int atk, int hp, int mins, int newrace) : Character(atk, hp){
	attack = atk;
	health = hp;
	minerals = mins;
	race = newrace;
}
#endif 
