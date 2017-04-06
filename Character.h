#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H

class Character
{
public:
	Character();
	Character(int atk, int hp);
	~Character();
	int getHP();
	int getAtk();
	void setHP(int hp);
	void setAtk(int atk);

protected:
	int attack;
	int health;
};

Character::Character(int atk, int hp) {
	setAtk(atk);
	setHP(hp);
}

Character::Character() {
	setAtk(0);
	setHP(1);
}

#endif