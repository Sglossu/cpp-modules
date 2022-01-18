#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	this->brain = new Brain();
	std::cout << "Default constructor of Dog called (" << type << ")" << std::endl;
}

Dog::Dog(const Dog &other) {
	this->type = other.type;
	brain = new Brain(*other.brain);
	std::cout << "Copy constructor of Dog called (" << type << ")" << std::endl;
}

Dog &Dog::operator=(Dog const &other) {
	if (this == & other)
		return (*this);
	if (this->brain)
		delete this->brain;
	this->brain = new Brain();
	this->brain = other.brain;
	type = other.type;
	return (*this);
}

Dog::~Dog() {
	delete brain;
	std::cout << "Destructor of Dog called (" << type << ")" << std::endl;
}

const std::string &Dog::getType() const {
	return type;
}

void Dog::makeSound() const {
	std::cout << type << " said woof woof!" << std::endl;
}

void Dog::setIdea(std::string idea) {
	this->brain->setIdea(idea);
}

std::string Dog::getIdea() const {
	return this->brain->getIdea();
}