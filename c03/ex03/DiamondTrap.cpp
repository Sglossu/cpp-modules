#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap() {
	this->hitpoints = FragTrap::hitpoints;
	attack_damage = FragTrap::attack_damage;
	energy_points = ScavTrap().getEnergyPoints();
	std::cout << "Default constructor of DiamondTrap called (" << \
	this->name << ")" << std::endl;
};

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap() {
	this->name = name;
	hitpoints = FragTrap::hitpoints;
	attack_damage = FragTrap::attack_damage;
	energy_points = ScavTrap().getEnergyPoints();
	std::cout << "Default constructor of DiamondTrap called (" << \
	this->name << ")" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Destructor of DiamondTrap called (" << \
	name << ")" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) {
	name = other.name;
	hitpoints = other.hitpoints;
	energy_points = other.energy_points;
	attack_damage = other.attack_damage;
	std::cout << "Copy constructor of FragTrap called (" << \
	this->name << " )" << std::endl;;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
	if (&other == this)
		return (*this);
	name = other.name;
	hitpoints = other.hitpoints;
	energy_points = other.energy_points;
	attack_damage = other.attack_damage;
	return (*this);
}

void DiamondTrap::whoAmI() {
	std::cout << "I am " << this->name << std::endl;
}

const std::string &DiamondTrap::getName() const { return name; }

int DiamondTrap::getHitpoints() const { return hitpoints; }

int DiamondTrap::getEnergyPoints() const { return energy_points; }

int DiamondTrap::getAttackDamage() const { return attack_damage; }
