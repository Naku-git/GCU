#include "Barbarian.h"
//definition of the function setData()
//sets the data for the variables of the class Barbarian
void Barbarian::setData() {
	name = "Barbarian";
	armor = 0;
	strength = 12;
	dead = false;
}
//definition of the function attack()
int Barbarian::attack() {
	int damage = attack_Roll();
	cout << "Barbarian attacks! Barbarian generated " << damage << " damage points to opponent..." << endl;
	return damage;
}
//definition of the function defense()
void Barbarian::defense(int d) {
	int defense = defense_Roll();
	int damage;

	if (d != 999) {
		cout << "Barbarian attempts to defend! Barbarian generated " << defense << " defense points. " << endl;
		damage = d - defense;
	}
	else
		damage = d;
	if (damage <= 0) {
		cout << "Barbarian defends! No change in armor and strength." << endl;
		cout << "Remaining armor points: " << armor << endl;
		cout << "Remaining strength points: " << strength << endl;
	}
	else if (damage == 999) {
		cout << "Barbarian Dies! Barbarian looked into Medusa's eyes and turned to stone!" << endl;
		cout << "Armor points: 0" << endl;
		cout << "Strength points: 0" << endl;
		dead = true;
	}
	else if (damage > armor) {
		damage = damage - armor;
		strength = strength - damage;
		armor = 0;
		if (strength > 0) {
			cout << "Barbarian gets hurt but survives! " << endl;
			cout << "Remaining armor points: " << armor << endl;
			cout << "Remaining strength points: " << strength << endl;
		}
		else if (strength <= 0) {
			cout << "Barbarian Dies! Defense not strong enough!" << endl;
			cout << "Armor points: " << armor << endl;
			cout << "Strength points: " << strength << endl;
			dead = true; // barbarian dies!
		}
	}
}
//definition of the function getName()
string Barbarian::getName() {
	return name;
}
//definition of the function isDead()
bool Barbarian::isDead() {
	return dead;
}
//definition of the function attack_Roll()

int Barbarian::attack_Roll() {
	int roll = rand() % 6 + 1;
	roll = roll + (rand() % 6 + 1);
	return roll;
}
//definition of the function defense_Roll()
int Barbarian::defense_Roll() {
	int roll = rand() % 6 + 1;
	roll = roll + (rand() % 6 + 1);
	return roll;
}
//definition of the function getArmor()
int Barbarian::getArmor() {
	return armor;
}
//definition of the function getStrength()
int Barbarian::getStrength() {
	return strength;
}