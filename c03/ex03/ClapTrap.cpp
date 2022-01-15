#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Noname"), hitpoints(10), energy_points(10), attack_damage(0) {
	std::cout << "Default constructor of ClapTrap called (" << \
	this->getName() << " )" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
	name(name), hitpoints(10), energy_points(10), attack_damage(0) {
	std::cout << "Default constructor of ClapTrap called (" << \
	this->getName() << " )" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	this->name = other.name;
	this->hitpoints = other.hitpoints;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
	std::cout << "Copy constructor of ClapTrap called (" << \
	this->getName() << " )" << std::endl;;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	if (&other == this)
		return (*this);
	this->name = other.name;
	this->hitpoints = other.hitpoints;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
	return (*this);

}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor of ClapTrap called (" << \
	this->getName() << " )" << std::endl;
}

const std::string &ClapTrap::getName() const {
	return name;
}

int ClapTrap::getHitpoints() const {
	return hitpoints;
}

int ClapTrap::getEnergyPoints() const {
	return energy_points;
}

int ClapTrap::getAttackDamage() const {
	return attack_damage;
}

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap" << name << " attack " << target << \
	", on " << attack_damage << " points." << std::endl;
}

void ClapTrap::setName(const std::string &name) {
	ClapTrap::name = name;
}

void ClapTrap::setHitpoints(int hitpoints) {
	ClapTrap::hitpoints = hitpoints;
}

void ClapTrap::setEnergyPoints(int energyPoints) {
	energy_points = energyPoints;
}

void ClapTrap::setAttackDamage(int attackDamage) {
	attack_damage = attackDamage;
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
