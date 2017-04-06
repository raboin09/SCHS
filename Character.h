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
	boid setAtk(int atk);

protected:
	int attack;
	int health;
};

#endif