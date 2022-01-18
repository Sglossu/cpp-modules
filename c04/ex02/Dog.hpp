#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
protected:
	Brain*	brain;
public:
	Dog();
	Dog(const Dog &obj);
	virtual ~Dog();

	Dog &operator=(Dog const &other);

	void makeSound() const;
	const std::string &getType() const;
	void setIdea(std::string idea);
	std::string getIdea() const;
};
