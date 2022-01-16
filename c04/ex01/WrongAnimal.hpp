#pragma once
#include <iostream>

class WrongAnimal {
protected:
	std::string 	type;
public:
	WrongAnimal();
	virtual ~WrongAnimal();

	virtual void makeSound() const;
	virtual const std::string &getType() const;
};

