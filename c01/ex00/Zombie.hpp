#include <iostream>

#pragma once

class Zombie {
	std::string name;

public:
	Zombie();
	Zombie(std::string name);
	void	announce(void);
	~Zombie();
};
