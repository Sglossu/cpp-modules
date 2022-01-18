#pragma once
#include <iostream>

class Animal {
protected:
	std::string	type;
public:
	Animal();
	Animal(const std::string name);
	Animal(const Animal &other);
	Animal& operator=(const Animal& other);
	virtual ~Animal();

	virtual void makeSound() const = 0;
	virtual const std::string &getType() const;
};
