#pragma once
#include <iostream>

class ClapTrap {
private:
	std::string	name;
	int			hitpoints;
	int			energy_points;
	int			attack_damage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap();

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	const std::string 	&getName() const;
	int 				getHitpoints() const;
	int 				getEnergyPoints() const;
	int 				getAttackDamage() const;
};
