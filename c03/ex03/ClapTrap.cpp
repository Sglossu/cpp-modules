#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Noname"), hitpoints(10), energy_points(10), attack_damage(0) {
	std::cout << "Default constructor of ClapTrap called (" << name << ")" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
								name(name),
								hitpoints(10),
								energy_points(10),
								attack_damage(0) {
	std::cout << "Default constructor of ClapTrap called (" << name << ")" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) :
								name(other.name),
								hitpoints(other.hitpoints),
								energy_points(other.energy_points),
								attack_damage(other.attack_damage) {
	std::cout << "Copy constructor of ClapTrap called (" << name << ")" << std::endl;
}

ClapTrap::ClapTrap(	int hp, int ep, int ad, std::string name) :
						name(name),
						hitpoints(hp),
						energy_points(ep),
						attack_damage(ad) {
	std::cout << "Default constructor of ClapTrap called (" << name << ")" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	if (&other == this)
		return (*this);
	name = other.name;
	hitpoints = other.hitpoints;
	energy_points = other.energy_points;
	attack_damage = other.attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor of ClapTrap called (" << this->name << ")" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	std::cout << name << " attack " << target <<
	", on " << attack_damage << " points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hitpoints <= 0) {
		std::cout << name << " is already dead, no repaires!" << std::endl;
	}
	else {
		hitpoints += amount;
		std::cout <<  name << " be repaired on " << \
		amount << " points." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hitpoints <= 0) {
		std::cout << name << " already is dead." << std::endl;
		return ;
	}

	hitpoints -= amount;
	std::cout <<  name << " take " << amount \
	<<  " points of damage!";

	if (hitpoints <= 0) {
		std::cout << " And " << name << " now is dead." << std::endl;
	}
	else {
		std::cout << std::endl;
	}
}


