#include <iostream>

#pragma once

class Zombie {
	std::string name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void	announce(void);
	void setName(const std::string &name);
};
