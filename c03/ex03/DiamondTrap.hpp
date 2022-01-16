#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string 	name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);

	const std::string &getName() const;
	int getHitpoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;


	DiamondTrap(const DiamondTrap &other);
	DiamondTrap& operator=(const DiamondTrap& other);
	~DiamondTrap();

	using ScavTrap::attack;

	void 	whoAmI();

};
