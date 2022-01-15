#pragma once
#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	FragTrap& operator=(const FragTrap& other);
	~FragTrap();

	void attack(std::string const &target);
	void highFivesGuys(void);
};
