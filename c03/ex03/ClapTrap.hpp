#pragma once
#include <iostream>

class ClapTrap {
protected:
	std::string	name;
	int			hitpoints;
	int			energy_points;
	int			attack_damage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap& operator=(const ClapTrap& other);
	ClapTrap(	int hitpoints,
				int energyPoints,
				int attackDamage,
				std::string mName = "Noname");
	~ClapTrap();

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};
