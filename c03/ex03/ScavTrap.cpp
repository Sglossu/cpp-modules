#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
		this->name = "Noname";
		this->hitpoints = 100;
		this->energy_points = 50;
		this->attack_damage = 20;
	std::cout << "Default constructor of ScavTrap called (" << name << ")" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
		this->name = name;
		this->hitpoints = 100;
		this->energy_points = 50;
		this->attack_damage = 20;
	std::cout << "Default constructor of ScavTrap called (" << name << ")" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor of ScavTrap called (" << this->name << ")" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	if (&other == this)
		return (*this);
	name = other.name;
	hitpoints = other.hitpoints;
	energy_points = other.energy_points;
	attack_damage = other.attack_damage;
	return (*this);
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << \
	" has entered in Gate keeper mode" << std::endl;
}

int ScavTrap::getEnergyPoints() const { return energy_points; }
