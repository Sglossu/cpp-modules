#pragma once
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
protected:
	std::string 	type;
public:
	WrongCat();
	virtual ~WrongCat();

	void makeSound() const;
	const std::string &getType() const;
};
