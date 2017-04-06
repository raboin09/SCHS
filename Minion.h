#pragma once

#ifndef MINION_H
#define MINION_H

#include "Character.h"

class Minion : public Character()
{
public:
	Minion(bool stealth, bool dead, int pos);
	Minion();
	~Minion();
	bool assertStealth();
	bool assertTaunt();
	void setTaunt(Minion tauntMinion);
	void setStealth(Minion stealthMinion);
	bool isDead();
	
private:
	bool hasStealth;
	bool hasTaunt;
	int position;

};

#endif