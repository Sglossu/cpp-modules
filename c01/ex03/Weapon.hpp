#pragma once

#include <iostream>

class Weapon {
private:
	std::string		type;

public:
	Weapon();
	Weapon(std::string type);
	const std::string &getType() const;
	void setType(const std::string &str);
};
