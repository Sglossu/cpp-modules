#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &other);
	~ScavTrap();

	ScavTrap& operator=(const ScavTrap& other);
	int getEnergyPoints() const;

	void guardGate();
};
