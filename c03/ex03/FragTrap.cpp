#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->name = "Noname";
	this->hitpoints = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "Default constructor of FragTrap called (" << name << ")" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->name = name;
	this->hitpoints = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "Default constructor of FragTrap called (" << name << ")" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {}

FragTrap::~FragTrap() {
	std::cout << "Destructor of FragTrap called (" << this->name << ")" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	if (&other == this)
		return (*this);
	name = other.name;
	hitpoints = other.hitpoints;
	energy_points = other.energy_points;
	attack_damage = other.attack_damage;
	return (*this);
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << name << \
	" hive Five!" << std::endl;
}