#ifndef BARBARIAN_H
#define BARBARIAN_H
#include "Character.h"
//define the class Barbarian

class Barbarian : public Character
{
public:
	void setData();
	int attack();
	void defense(int d);
	string getName();
	bool isDead();
	int attack_Roll();
	int defense_Roll();
	int getArmor();
	int getStrength();
	~Barbarian() {}
};
#endif