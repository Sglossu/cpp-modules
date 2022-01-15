#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->setHitpoints(100);
	this->setName("Noname");
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "Default constructor of ScavTrap called" << std::endl;
};

FragTrap::FragTrap(std::string name) {
	this->setHitpoints(100);
	this->setName(name);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "Default constructor of ScavTrap called" << std::endl;
};


FragTrap::~FragTrap() {
	std::cout << "Destructor of ScavTrap called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	if (&other == this)
		return (*this);
	this->setHitpoints(other.getHitpoints());
	this->setName(other.getName());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());
	return (*this);
}

void FragTrap::attack(const std::string &target) {
	std::cout << "FragTrap" << this->getName() << " attack " << target << \
	", on " << this->getAttackDamage() << " points." << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->getName() << \
	" hive Five!" << std::endl;
}