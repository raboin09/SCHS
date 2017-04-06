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
	void changeHeroPowerBool();

	int getMinerals();
	void setMinerals(int mins);

	int getRace();

	void addCardToHand();

	void addMinionsToDeck();

	void addCardToBoard(Minion newMinion);

private:
	std::vector<Minion> activeMinions;
	bool usedHeroPower;
	std::vector<Minion> deck;
	std::vector<Minion> hand;
	int minerals;
	int race;
	bool usedHeroPower;
	bool isHerosTurn;
};

Player::Player() {
	setMinerals(0);
	race = 0;
	usedHeroPower = false;

}

Player::Player(int atk, int hp, int mins, int newrace) : Character(atk, hp){
	setAtk(atk);
	setHP(hp);
	setMinerals(mins);
	race = newRace;
	usedHeroPower = false;
}
#endif 
