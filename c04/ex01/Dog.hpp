#pragma once
#include "Animal.hpp"


class Dog : public Animal {
public:
	Dog();
	Dog(const Dog &obj);
	virtual ~Dog();

	Dog &operator=(Dog const &other);

	void makeSound() const;
	const std::string &getType() const;
};
