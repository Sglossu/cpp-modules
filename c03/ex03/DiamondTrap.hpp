#pragma once
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string 	name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap& operator=(const DiamondTrap& other);
	~DiamondTrap();

	using ScavTrap::attack;

	const std::string &getName() const;
	void setName(const std::string &name);

	void 	whoAmI();

};
