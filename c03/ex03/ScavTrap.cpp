#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	this->setHitpoints(100);
//	this->setName("Noname");
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "Default constructor of ScavTrap called (" << \
	this->getName() << " )" << std::endl;
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->setHitpoints(100);
//	this->setName(name);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "Default constructor of ScavTrap called (" << \
	this->getName() << " )" << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	this->setHitpoints(other.getHitpoints());
	this->setName(other.getName());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());
	std::cout << "Copy constructor of ScavTrap called (" << \
	this->getName() << " )" << std::endl;;
};

ScavTrap::~ScavTrap() {
	std::cout << "Destructor of ScavTrap called (" << \
	this->getName() << " )" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	if (&other == this)
		return (*this);
	this->setHitpoints(other.getHitpoints());
	this->setName(other.getName());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());
	return (*this);
}

void ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap " << this->getName() << " attack " << target << \
	", on " << this->getAttackDamage() << " points." << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->getName() << \
	" has entered in Gate keeper mode" << std::endl;
}