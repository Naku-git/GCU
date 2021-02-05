#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;
//define the class Character
//This is the base class.
class Character
{
protected:
	string name;
	int armor;
	int strength;
	bool dead;

public:
	// declare all the Functions as virtual functions
	virtual void setData() = 0;
	virtual int attack() = 0;
	virtual void defense(int d) = 0;
	virtual bool isDead() = 0;
	virtual int attack_Roll() = 0;
	virtual int defense_Roll() = 0;
	virtual string getName() = 0;
	virtual int getArmor() = 0;
	virtual int getStrength() = 0;
	virtual ~Character() {}
};
#endif