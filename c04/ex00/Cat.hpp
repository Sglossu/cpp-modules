#pragma once
#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat &other);
	Cat& operator=(const Cat& other);
	virtual ~Cat();

	void makeSound() const;
	const std::string &getType() const;
};
