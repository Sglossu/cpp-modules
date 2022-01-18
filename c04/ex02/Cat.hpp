#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
protected:
	Brain*	brain;
public:
	Cat();
	Cat(const Cat &other);
	Cat& operator=(const Cat& other);
	virtual ~Cat();

	void makeSound() const;
	const std::string &getType() const;
	void setIdea(std::string idea);
	std::string getIdea() const;
};
