#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap() {
	this->setHitpoints(FragTrap::getHitpoints());
//	this->setName("Noname");
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "Default constructor of DiamondTrap called (" << \
	this->name << " )" << std::endl;
};

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name + "_clap_name") {

	this->setHitpoints(FragTrap::getHitpoints());
	this->name = name;
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "Default constructor of DiamondTrap called (" << \
	this->name << " )" << std::endl;
};


DiamondTrap::~DiamondTrap() {
	std::cout << "Destructor of DiamondTrap called (" << \
	this->getName() << " )" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) :
	ClapTrap(other.getName()), ScavTrap(other.getName()), FragTrap(other.getName())  {
	this->setHitpoints(other.getHitpoints());
	this->name = other.name;
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());
	std::cout << "Copy constructor of FragTrap called (" << \
	this->name << " )" << std::endl;;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
	if (&other == this)
		return (*this);
	this->setHitpoints(other.getHitpoints());
	this->name = other.name;
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());
	return (*this);
}

void DiamondTrap::whoAmI() {
	std::cout << "I am " << this->name << " (of " << ClapTrap::getName() << ")" << std::endl;
}

const std::string &DiamondTrap::getName() const {
	return name;
}

void DiamondTrap::setName(const std::string &name) {
	DiamondTrap::name = name;
}
